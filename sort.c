/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:41:48 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 16:41:49 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	if (stack->a[2] > stack->a[1] && stack->a[2] > stack->a[0]
		&& stack->a[1] > stack->a[0])
	{
		ra(stack, 1);
		sa(stack, 1);
	}
	else if (stack->a[2] > stack->a[1] && stack->a[2] > stack->a[0]
		&& stack->a[1] < stack->a[0])
		ra(stack, 1);
	else if (stack->a[2] > stack->a[1] && stack->a[2] < stack->a[0]
		&& stack->a[1] < stack->a[0])
		sa(stack, 1);
	else if (stack->a[2] < stack->a[1] && stack->a[2] > stack->a[0]
		&& stack->a[1] > stack->a[0])
		rra(stack, 1);
	else if (stack->a[2] < stack->a[1] && stack->a[2] < stack->a[0]
		&& stack->a[1] > stack->a[0])
	{
		rra(stack, 1);
		sa(stack, 1);
	}
}

void	sort_4_5(t_stack *stack)
{
	if (stack->a_len == 5)
	{
		push_smallest(stack);
		push_smallest(stack);
		sort_three(stack);
		pa(stack);
		pa(stack);
	}
	else
	{
		push_smallest(stack);
		sort_three(stack);
		pa(stack);
	}
}

void	sort_big(t_stack *stack, int x)
{
	int	k;
	int	i;
	int	limit;

	k = 1;
	if (x)
		limit = 100000000;
	else
		limit = 1000000;
	while (k <= limit)
	{
		i = stack->a_len;
		while (i--)
		{
			if ((a_top(stack) / k) % 10 == 0)
				pb(stack);
			else
				ra(stack, 1);
		}
		while (stack->b_len != 0)
			pa(stack);
		k *= 10;
	}
}

void	sort(t_stack *stack)
{
	if (!is_sorted(stack->a, stack->a_len))
	{
		if (stack->a_len == 2 && stack->a[0] < stack->a[1])
			sa(stack, 1);
		else if (stack->a_len == 3)
			sort_three(stack);
		else if (stack->a_len <= 5)
			sort_4_5(stack);
		else if (stack->a_len <= 100)
			sort_big(stack, 0);
		else
			sort_big(stack, 1);
	}
}
