/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:18:10 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 17:18:11 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	a_top(t_stack *stack)
{
	return (stack->a[stack->a_len - 1]);
}

int	is_sorted(int *array, int len)
{
	int	i;

	i = -1;
	while (++i < len)
		if (array[i] < array[i + 1])
			return (0);
	return (1);
}

int	has_space(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == ' ')
			i++;
		str++;
	}
	return (i);
}

int	get_args(int argc, char **argv)
{
	if (argc > 2)
		return (argc - 1);
	return (has_space(argv[1]) + 1);
}
