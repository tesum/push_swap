/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:55:54 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 15:00:34 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stacks *stacks, t_commands *commands, int flag)
{
	if (!stacks->a || !stacks->b)
		return ;
	sa(stacks, commands, 0);
	sb(stacks, commands, 0);
	if (flag == 1)
		write(1, "ss\n", 3);
}
