/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:20:43 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 14:59:50 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stacks *stacks, t_commands *commands, int flag)
{
	if (!stacks->a || !stacks->b)
		return ;
	ra(stacks, commands, 0);
	rb(stacks, commands, 0);
	add_command(commands, "rr");
	if (flag == 1)
		write(1, "rr\n", 3);
}
