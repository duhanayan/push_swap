/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 04:45:18 by dayan             #+#    #+#             */
/*   Updated: 2022/07/20 04:45:20 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_a(int argc, char **argv, t_stack *stack)
{
	int		*array;

	array = allocate_int(argc - 1);
	if (check_numeric(argc, argv))
	{
		fill_stack(stack, argc, argv);
		if (!check_duplicate(stack))
		{
			free(array);
			error(stack);
		}
		convert_to_binary(stack);
		free(array);
	}
	else
	{
		free(array);
		error(stack);
	}
}

int	find_min_index(t_stack *stack)
{
	int	i;
	int	tmp;

	tmp = stack->a_len - 1;
	i = -1;
	while (++i < stack->a_len)
		if (stack->a[i] < stack->a[tmp])
			tmp = i;
	return (tmp);
}

void	push_smallest(t_stack *stack)
{
	int	min_index;
	int	min_value;
	int	distance[2];

	min_index = find_min_index(stack);
	min_value = stack->a[min_index];
	while (1)
	{
		if (a_top(stack) == min_value)
		{
			pb(stack);
			break ;
		}
		distance[0] = (min_index - 0) + 1;
		if (distance[0] < 0)
			distance[0] *= -1;
		distance[1] = (min_index - (stack->a_len - 1));
		if (distance[1] < 0)
			distance[1] *= -1;
		if (distance[0] <= distance[1])
			rra(stack, 1);
		else
			ra(stack, 1);
	}
}
