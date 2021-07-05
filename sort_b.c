#include "push_swap.h"

void	sort_3_in_b(t_stacks *stacks, t_commands *commands, t_sort *sort)
{
	sort_three(stacks, commands, 'b');
	pa(stacks, commands, 1);
	ra(stacks, commands, 1);
	pa(stacks, commands, 1);
	ra(stacks, commands, 1);
	pa(stacks, commands, 1);
	ra(stacks, commands, 1);
	sort->next += 3;
}

void	sort_2_in_b(t_stacks *stacks, t_commands *commands, t_sort *sort)
{
	if (stacks->b->index > stacks->b->next->index)
		sb(stacks, commands, 1);
	pa(stacks, commands, 1);
	ra(stacks, commands, 1);
	pa(stacks, commands, 1);
	ra(stacks, commands, 1);
	sort->next += 2;
}

void	sort_1_in_b(t_stacks *stacks, t_commands *commands, t_sort *sort)
{
	pa(stacks, commands, 1);
	ra(stacks, commands, 1);
	sort->next++;
}

void	sort_small_b(t_stacks *stacks, t_commands *commands, t_sort *sort)
{
	int	size;

	size = ft_lstsize(stacks->b);
	if (size == 3)
		sort_3_in_b(stacks, commands, sort);
	else if (size == 2)
		sort_2_in_b(stacks, commands, sort);
	else if (size == 1)
		sort_1_in_b(stacks, commands, sort);
}
