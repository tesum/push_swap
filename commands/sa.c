/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:13:00 by demilan           #+#    #+#             */
/*   Updated: 2021/06/09 15:18:03 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*save;

	if (stacks == NULL || stacks->a == NULL)
		return ;
	save = stacks->a;
	stacks->a = stacks->a->next;
	save->next = stacks->a->next;
	stacks->a->next = save;
	add_command(commands, "sa");
	if (flag == 1)
		write(1, "sa\n", 3);
}
