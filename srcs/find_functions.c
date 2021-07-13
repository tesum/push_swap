#include "push_swap.h"

int	f_max(t_list *stack)
{
	t_list	*m;
	int		max;

	m = stack;
	max = 0;
	while (m)
	{
		if ((int)m->index > max)
			max = (int)m->index;
		m = m->next;
	}
	return (max);
}

int	f_min(t_list *stack)
{
	t_list	*m;
	int		min;

	m = stack;
	min = __INT32_MAX__;
	while (m)
	{
		if (m->index < min)
			min = m->index;
		m = m->next;
	}
	return (min);
}

int	f_elem(t_list *stacks, int el)
{
	t_list	*elem;
	int		i;

	i = 0;
	elem = stacks;
	while ((int)elem->content != el)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}

t_list	*f_index(int *arr, t_list *stack)
{
	int		i;
	t_list	*save;

	i = 0;
	save = stack;
	while (havent_all_index(stack))
	{
		while (stack)
		{
			if (stack->content == arr[i])
			{
				stack->index = i + 1;
				break ;
			}
			stack = stack->next;
		}
		i++;
		stack = save;
	}
	return (save);
}

void	push_if_next(t_stacks *stacks, t_sort *sort, t_commands *commands)
{
	while (stacks->a->index == sort->next)
	{
		ra(stacks, commands, 1);
		sort->next++;
	}
}
