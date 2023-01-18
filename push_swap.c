/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:06:08 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 15:06:09 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		len;

	if (argc < 2 || (argc == 2 && !has_space(argv[1])))
		return (0);
	len = get_args(argc, argv);
	stack = allocate_stack(len);
	fill_a(argc, argv, stack);
	sort(stack);
	free_stack(stack);
	return (0);
}
