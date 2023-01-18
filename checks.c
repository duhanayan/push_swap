/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:30:59 by dayan             #+#    #+#             */
/*   Updated: 2022/05/24 21:31:00 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_stack *stack)
{
	write(1, "Error\n", 6);
	free_stack(stack);
	exit(1);
}

void	free_stack(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
}

int	check_duplicate(t_stack *stack)
{
	int	i;
	int	tmp;
	int	j;
	int	counter;

	j = -1;
	while (++j < stack->a_len)
	{
		counter = 0;
		tmp = stack->a[j];
		i = -1;
		while (++i < stack->a_len)
		{
			if (tmp == stack->a[i])
			{
				counter++;
				if (counter > 1)
					return (0);
			}
		}
	}
	return (1);
}

int	check_numeric(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			if ((argv[i][j] < 48 || argv[i][j] > 57) && argv[i][j] != '-'
				&& argv[i][j] != ' ')
				return (0);
	}
	return (1);
}
