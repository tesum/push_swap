/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:54:10 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 14:59:09 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*last;

	if (!stacks->a)
		return ;
	last = ft_lstlast(stacks->a);
	last->next = stacks->a;
	last = last->next;
	stacks->a = stacks->a->next;
	last->next = NULL;
	add_command(commands, "ra");
	if (flag == 1)
		write(1, "ra\n", 3);
}
