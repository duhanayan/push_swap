/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:26:05 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 20:26:07 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack *stack)
{
	sa(stack, 0);
	sb(stack, 0);
	write(1, "ss\n", 3);
}

void	rr(t_stack *stack)
{
	ra(stack, 0);
	rb(stack, 0);
	write(1, "rr\n", 3);
}

void	rrr(t_stack *stack)
{
	rra(stack, 0);
	rrb(stack, 0);
	write(1, "rrr\n", 4);
}
