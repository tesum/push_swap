/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:55:01 by demilan           #+#    #+#             */
/*   Updated: 2021/06/09 15:18:23 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*save;

	if (stacks == NULL || stacks->b == NULL)
		return ;
	save = stacks->b;
	stacks->b = stacks->b->next;
	save->next = stacks->b->next;
	stacks->b->next = save;
	add_command(commands, "sa");
	if (flag == 1)
		write(1, "sb\n", 3);
}
