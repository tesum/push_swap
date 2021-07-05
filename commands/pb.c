/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:29:53 by demilan           #+#    #+#             */
/*   Updated: 2021/06/09 15:17:11 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*save;

	if (stacks == NULL || stacks->a == NULL)
		return ;
	save = stacks->a;
	ft_lstadd_front(&stacks->b,
		ft_lstnew(stacks->a->content, stacks->a->index, stacks->a->flag));
	free(stacks->a);
	stacks->a = save->next;
	add_command(commands, "pb");
	if (flag == 1)
		write(1, "pb\n", 3);
}
