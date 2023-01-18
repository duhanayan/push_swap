/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 05:02:47 by dayan             #+#    #+#             */
/*   Updated: 2022/06/14 05:02:47 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	counter(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	fill_stack(t_stack *stack, int argc, char **argv)
{
	char	**tmp;
	int		i;

	i = argc - 1;
	if (argc > 2)
		while (i)
			stack->a[stack->a_len++] = ft_atoi(argv[i--]);
	else
	{
		tmp = ft_split(argv[1], ' ');
		i = counter(tmp) - 1;
		while (tmp[i])
		{
			stack->a[stack->a_len++] = ft_atoi(tmp[i]);
			free(tmp[i--]);
		}
		free(tmp);
	}
}

void	convert_to_simple(t_stack *stack)
{
	int	i;
	int	j;
	int	*array;
	int	counter;

	i = -1;
	array = malloc(sizeof(int) * stack->a_len);
	while (++i < stack->a_len)
	{
		counter = 0;
		j = -1;
		while (++j < stack->a_len)
			if (stack->a[i] > stack->a[j])
				counter++;
		array[i] = counter;
	}
	i = -1;
	while (++i < stack->a_len)
		stack->a[i] = array[i];
	free(array);
}

void	convert_to_binary(t_stack *stack)
{
	int			i;
	int			k;
	int			remain;
	long long	bin;

	convert_to_simple(stack);
	i = 0;
	while (i < stack->a_len)
	{
		k = 1;
		bin = 0;
		while (stack->a[i] != 0)
		{
			remain = stack->a[i] % 2;
			stack->a[i] /= 2;
			bin += remain * k;
			k *= 10;
		}
		stack->a[i] = bin;
		i++;
	}
}
