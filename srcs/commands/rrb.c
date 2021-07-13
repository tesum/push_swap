/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 02:00:17 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 15:00:04 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*prelast;

	if (!stacks->b)
		return ;
	prelast = stacks->b;
	while (prelast->next->next)
		prelast = prelast->next;
	ft_lstadd_front(&stacks->b, ft_lstlast(stacks->b));
	prelast->next = NULL;
	add_command(commands, "rrb");
	if (flag == 1)
		write(1, "rrb\n", 4);
}
