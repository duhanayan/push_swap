/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:21:02 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 17:21:03 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack, int x)
{
	if (stack->a_len < 2)
		return ;
	ft_swap(&stack->a[stack->a_len - 1], &stack->a[stack->a_len - 2]);
	if (x)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack, int x)
{
	if (stack->b_len < 2)
		return ;
	ft_swap(&stack->b[stack->b_len - 1], &stack->b[stack->b_len - 2]);
	if (x)
		write(1, "sb\n", 3);
}

void	pa(t_stack *stack)
{
	if (stack->b_len != 0)
	{
		stack->a[stack->a_len++] = stack->b[--stack->b_len];
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack *stack)
{
	if (stack->a_len != 0)
	{
		stack->b[stack->b_len++] = stack->a[--stack->a_len];
		write(1, "pb\n", 3);
	}
}
