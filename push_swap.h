/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayan <dayan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:06:40 by dayan             #+#    #+#             */
/*   Updated: 2022/05/22 15:06:44 by dayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap.h"
# include "libft/libft.h"
# include <stdio.h>
# include <math.h>

typedef struct s_stack
{	
	int		*a;
	int		*b;
	int		a_len;
	int		b_len;
	char	**binary;
}	t_stack;

// allocates
t_stack	*allocate_stack(int len);
int		*allocate_int(int len);

// checkers
void	error(t_stack *stack);
int		check_duplicate(t_stack *stack);
int		check_numeric(int argc, char **argv);
void	free_stack(t_stack *stack);

//binary
void	fill_stack(t_stack *stack, int argc, char **argv);
void	fill_array(int argc, char **argv, int *array);
void	convert_to_binary(t_stack *stack);

// sort
void	sort(t_stack *stack);

// utils
void	ft_swap(int *a, int *b);
int		a_top(t_stack *stack);
int		is_sorted(int *array, int len);
int		has_space(char *str);
int		get_args(int argc, char **argv);
void	fill_a(int argc, char **argv, t_stack *stack);

// utils_2
void	push_smallest(t_stack *stack);

// commands
void	sa(t_stack *stack, int x);
void	sb(t_stack *stack, int x);

void	pa(t_stack *stack);
void	pb(t_stack *stack);

void	ra(t_stack *stack, int x);
void	rb(t_stack *stack, int x);

void	rra(t_stack *stack, int x);
void	rrb(t_stack *stack, int x);

void	ss(t_stack *stack);
void	rr(t_stack *stack);
void	rrr(t_stack *stack);

#endif