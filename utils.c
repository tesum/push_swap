#include "push_swap.h"

int	len_2s_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*error_exit(void)
{
	write(1, "Error\n", 6);
	exit(-1);
}

int	reinvite_exit(void)
{
	write(1, "Enter arguments\n", 17);
	exit(-1);
}

int	havent_all_index(t_list *stack)
{
	t_list	*save;

	save = stack;
	while (save)
	{
		if (save->index == 0)
			return (1);
		save = save->next;
	}
	return (0);
}

t_stacks	*init_stack(void)
{
	t_stacks	*new;

	new = malloc(sizeof(t_stacks));
	new->b = NULL;
	new->a = NULL;
	return (new);
}
