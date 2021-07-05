/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 17:45:28 by demilan           #+#    #+#             */
/*   Updated: 2021/06/10 15:05:46 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_stacks *stacks, int *arr, int count, t_commands *commands)
{
	create_stack_arr(arr, stacks, count);
	if (check_stack(stacks) < 0)
		exit(1);
	arr = sort_arr(arr, count);
	stacks->a = f_index(arr, stacks->a);
	sort(count, stacks, commands);
}

int	main(int argc, char **argv)
{
	int			*arr;
	int			count;
	char		**spl;
	t_stacks	*stacks;
	t_commands	*commands;

	commands = create_command("start");
	stacks = init_stack();
	if (argc == 2)
	{
		spl = ft_split(argv[1], ' ');
		count = len_2s_str(spl);
		arr = (int *)malloc(sizeof(int) * (count));
		arr = if_2_arg(spl, arr);
	}
	else if (argc > 2)
	{
		count = argc - 1;
		arr = (int *)malloc(sizeof(int) * (count));
		arr = if_more_2_arg(count, argv, arr);
	}
	else
		return (reinvite_exit());
	sorting(stacks, arr, count, commands);
}
