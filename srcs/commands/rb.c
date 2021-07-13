/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:16:36 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 14:59:20 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*last;

	if (!stacks->b)
		return ;
	last = ft_lstlast(stacks->b);
	last->next = stacks->b;
	last = last->next;
	stacks->b = stacks->b->next;
	last->next = NULL;
	add_command(commands, "rb");
	if (flag == 1)
		write(1, "rb\n", 3);
}
