/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 02:01:11 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 15:00:15 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stacks *stacks, t_commands *commands, int flag)
{
	if (!stacks->a || !stacks->b)
		return ;
	rra(stacks, commands, 0);
	rrb(stacks, commands, 0);
	add_command(commands, "rrr");
	if (flag == 1)
		write(1, "rrr\n", 4);
}
