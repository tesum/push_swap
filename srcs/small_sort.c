#include "push_swap.h"

int	sort_3_or_5(t_stacks *stacks, int count, t_commands *command)
{
	if (count == 2)
	{
		sa(stacks, command, 1);
		return (1);
	}
	if (count == 3)
	{
		sort_three(stacks, command, 'a');
		return (1);
	}
	else if (count == 4)
	{
		sort_4(stacks, command);
		return (1);
	}
	else if (count == 5)
	{
		sort_five(stacks, command);
		return (1);
	}
	return (0);
}

void	sort_three(t_stacks *stacks, t_commands *command, char c)
{
	int	max;

	if (c == 'a')
	{
		max = f_max(stacks->a);
		if (stacks->a->index == max)
			ra(stacks, command, 1);
		if (stacks->a->next->index == max)
			rra(stacks, command, 1);
		if (stacks->a->index > stacks->a->next->index)
			sa(stacks, command, 1);
	}
	else
	{
		max = f_max(stacks->b);
		if (stacks->b->index == max)
			rb(stacks, command, 1);
		if (stacks->b->next->index == max)
			rrb(stacks, command, 1);
		if (stacks->b->index > stacks->b->next->index)
			sb(stacks, command, 1);
	}
}

void	sort_4(t_stacks *stacks, t_commands *commands)
{
	int	index;

	index = f_min(stacks->a);
	while (stacks->a->index != index)
		ra(stacks, commands, 1);
	pb(stacks, commands, 1);
	sort_three(stacks, commands, 'a');
	pa(stacks, commands, 1);
}

void	sort_five(t_stacks *stacks, t_commands *commands)
{
	int	index;

	while (ft_lstsize(stacks->b) != 2)
	{
		index = f_min(stacks->a);
		while (stacks->a->index != index)
			ra(stacks, commands, 1);
		pb(stacks, commands, 1);
	}
	sort_three(stacks, commands, 'a');
	pa(stacks, commands, 1);
	pa(stacks, commands, 1);
}

void	push_b_flag_0(t_stacks *stacks, t_sort *sort, t_commands *commands)
{
	while (stacks->a->flag == 0)
	{
		if (stacks->a->index == sort->next)
		{
			ra(stacks, commands, 1);
			sort->next++;
		}
		else
			pb(stacks, commands, 1);
	}
}
