/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 00:47:36 by demilan           #+#    #+#             */
/*   Updated: 2021/06/09 15:15:25 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*save;

	if (stacks == NULL || stacks->b == NULL)
		return ;
	save = stacks->b;
	ft_lstadd_front(&stacks->a,
		ft_lstnew(stacks->b->content, stacks->b->index, stacks->b->flag));
	free(stacks->b);
	stacks->b = save->next;
	add_command(commands, "pa");
	if (flag == 1)
		write(1, "pa\n", 3);
}
