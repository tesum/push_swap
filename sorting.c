#include "push_swap.h"

void	new_sort_max(t_list *stack, t_sort *sort)
{
	t_list	*save;

	save = stack;
	while (save->flag == 0)
	{
		if (sort->max < save->index)
			sort->max = save->index;
		save = save->next;
	}
}

int	count_step_end(t_list *stack, t_sort *sort, int step_begin)
{
	t_list	*save;
	int		step;
	int		i;

	i = 0;
	save = stack;
	while (save)
	{
		if (save->index == sort->next || save->index >= sort->mid)
			step = i;
		i++;
		save = save->next;
	}
	if (step_begin < ft_lstsize(stack) - step)
		return (1);
	else
		return (-1);
}

int	count_step(t_list *stack, t_sort *sort)
{
	int		step;
	t_list	*save;

	save = stack;
	step = 0;
	while (save)
	{
		if (save->index == sort->next || save->index >= sort->mid)
			return (count_step_end(stack, sort, step));
		step++;
		save = save->next;
	}
	return (0);
}

void	sort(int count, t_stacks *stacks, t_commands *commands)
{
	t_sort	*sort;

	if (sort_3_or_5(stacks, count, commands))
		return ;
	sort = init_sort(count);
	first_push_a(stacks, sort, commands);
	first_push_b(stacks, sort, commands);
	while (1)
	{
		push_b(stacks, sort, commands);
		if (ft_lstsize(stacks->b) <= 3)
			break ;
		push_a(stacks, sort, commands);
	}
	push_if_next(stacks, sort, commands);
	sort_small_b(stacks, commands, sort);
	new_sort_max(stacks->a, sort);
	push_b_flag_0(stacks, sort, commands);
	while (ft_lstsize(stacks->b) > 2)
	{
		push_a(stacks, sort, commands);
		push_b(stacks, sort, commands);
	}
	sort_small_b(stacks, commands, sort);
}
