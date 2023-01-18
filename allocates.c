/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocates.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:12:38 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 15:12:40 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*allocate_int(int len)
{
	int	*x;

	x = (int *)malloc(sizeof(int) * (len + 1));
	if (!x)
		return (NULL);
	return (x);
}

t_stack	*allocate_stack(int len)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->a = allocate_int(len);
	stack->b = allocate_int(len);
	stack->a_len = 0;
	stack->b_len = 0;
	return (stack);
}
