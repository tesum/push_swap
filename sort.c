#include "push_swap.h"

void	first_push_a(t_stacks *stacks, t_sort *sort, t_commands *commands)
{
	int	i;

	i = 0;
	while (i != sort->mid)
	{
		if (stacks->a->index <= sort->mid)
		{
			pb(stacks, commands, 1);
			i++;
		}
		else
			ra(stacks, commands, 1);
	}
}

void	choose_rotate(t_stacks *stacks, t_sort *sort, t_commands *commands)
{
	if (count_step(stacks->b, sort) == 1)
		rb(stacks, commands, 1);
	else
		rrb(stacks, commands, 1);
}

void	first_push_b(t_stacks *stacks, t_sort *sort, t_commands *commands)
{
	int	i;

	sort->max = sort->mid;
	sort->mid = (sort->max - sort->next) / 2 + sort->next;
	sort->flag++;
	while (stacks->b)
	{
		i = 0;
		while (i <= sort->mid && stacks->b)
		{
			if (stacks->b->index == sort->next || stacks->b->index >= sort->mid)
			{
				stacks->b->flag = sort->flag;
				pa(stacks, commands, 1);
				if (stacks->a->index == sort->next)
				{
					ra(stacks, commands, 1);
					sort->next++;
				}
				i++;
			}
			else
				choose_rotate(stacks, sort, commands);
		}
	}
}

void	push_b(t_stacks *stacks, t_sort *sort, t_commands *commands)
{
	while (stacks->a->flag == sort->flag)
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

void	push_a(t_stacks *stacks, t_sort *sort, t_commands *commands)
{
	int	i;

	sort->mid = (sort->max - sort->next) / 2 + sort->next;
	sort->flag++;
	while (stacks->b)
	{
		i = 0;
		while (i <= sort->mid && stacks->b)
		{
			if (stacks->b->index == sort->next || stacks->b->index >= sort->mid)
			{
				stacks->b->flag = sort->flag;
				pa(stacks, commands, 1);
				if (stacks->a->index == sort->next)
				{
					ra(stacks, commands, 1);
					sort->next++;
				}
				i++;
			}
			else
				choose_rotate(stacks, sort, commands);
		}
	}
}
