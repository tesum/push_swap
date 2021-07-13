/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:28:58 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 14:59:56 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stacks *stacks, t_commands *commands, int flag)
{
	t_list	*prelast;

	if (!stacks->a)
		return ;
	prelast = stacks->a;
	while (prelast->next->next)
		prelast = prelast->next;
	ft_lstadd_front(&stacks->a, ft_lstlast(stacks->a));
	prelast->next = NULL;
	add_command(commands, "rra");
	if (flag == 1)
		write(1, "rra\n", 4);
}
