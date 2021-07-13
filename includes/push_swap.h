/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesum <tesum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:07:11 by demilan           #+#    #+#             */
/*   Updated: 2021/07/13 20:50:18 by tesum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ERR_MALLOC 228
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"
# include "get_next_line.h"

typedef struct s_stacks
{
	struct s_list	*a;
	struct s_list	*b;
}				t_stacks;

typedef struct s_sort
{
	int	next;
	int	mid;
	int	max;
	int	flag;
}				t_sort;

typedef struct s_commands
{
	char				*command;
	struct s_commands	*next;
}				t_commands;

// init
void		create_stack_arr(int *arr, t_stacks *stacks, int count);
int			*sort_arr(int *arr, int count);
t_sort		*init_sort(int count);
t_stacks	*init_stack(void);

int			*if_2_arg(char **spl, int *arr);
int			*if_more_2_arg(int count, char **argv, int *arr);

// sort func
void		sort(int count, t_stacks *stacks, t_commands *commands);
void		first_push_a(t_stacks *stacks, t_sort *sort, t_commands *commands);
void		first_push_b(t_stacks *stacks, t_sort *sort, t_commands *commands);
void		push_b_flag_0(t_stacks *stacks, t_sort *sort, t_commands *commands);
void		push_if_next(t_stacks *stacks, t_sort *sort, t_commands *commands);
void		push_b(t_stacks *stacks, t_sort *sort, t_commands *commands);
void		push_a(t_stacks *stacks, t_sort *sort, t_commands *commands);
int			count_step(t_list *stack, t_sort *sort);

void		sort_three(t_stacks *stacks, t_commands *command, char c);
void		sort_4(t_stacks *stacks, t_commands *commands);
void		sort_five(t_stacks *stacks, t_commands *command);
int			sort_3_or_5(t_stacks *stacks, int count, t_commands *command);
void		sort_small_b(t_stacks *stacks, t_commands *commands, t_sort *sort);

// command-list
t_commands	*create_command(char *s);
void		add_command(t_commands *list, char *s);

// find func
int			f_max(t_list *stacks);
int			f_min(t_list *stacks);
int			f_elem(t_list *stacks, int el);
t_list		*f_index(int *arr, t_list *stack);

// check func
int			check_stack(t_stacks *stacks);
int			ft_isDigit(char *str);
int			check_stack_sorted(t_stacks *stacks);
int			check_stack_identical(t_stacks *stacks);

// utils
int			*error_exit(void);
int			reinvite_exit(void);
int			len_2s_str(char **str);
int			havent_all_index(t_list *stack);

// commands
void		pa(t_stacks *stacks, t_commands *commands, int flag);
void		pb(t_stacks *stacks, t_commands *commands, int flag);

void		sa(t_stacks *stacks, t_commands *commands, int flag);
void		sb(t_stacks *stacks, t_commands *commands, int flag);
void		ss(t_stacks *stacks, t_commands *commands, int flag);

void		ra(t_stacks *stacks, t_commands *commands, int flag);
void		rb(t_stacks *stacks, t_commands *commands, int flag);
void		rr(t_stacks *stacks, t_commands *commands, int flag);
void		rra(t_stacks *stacks, t_commands *commands, int flag);
void		rrb(t_stacks *stacks, t_commands *commands, int flag);
void		rrr(t_stacks *stacks, t_commands *commands, int flag);

// free
void		free_split(char **str);

#endif