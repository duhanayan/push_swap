/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:21:08 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 17:21:10 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack, int x)
{
	int	i;

	i = stack->a_len;
	while (--i)
		ft_swap(&stack->a[i], &stack->a[i - 1]);
	if (x)
		write(1, "ra\n", 3);
}

void	rb(t_stack *stack, int x)
{
	int	i;

	i = stack->b_len;
	while (--i)
		ft_swap(&stack->b[i], &stack->b[i - 1]);
	if (x)
		write(1, "rb\n", 3);
}

void	rra(t_stack *stack, int x)
{
	int	i;

	i = 0;
	while (i < stack->a_len - 1)
	{
		ft_swap(&stack->a[i], &stack->a[i + 1]);
		i++;
	}
	if (x)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *stack, int x)
{
	int	i;

	i = 0;
	while (i < stack->b_len - 1)
	{
		ft_swap(&stack->b[i], &stack->b[i + 1]);
		i++;
	}
	if (x)
		write(1, "rrb\n", 4);
}
