#include "push_swap.h"

int	*if_2_arg(char **spl, int *arr)
{
	int	i;

	i = 0;
	while (spl[i])
	{
		if (ft_isDigit(spl[i]) == -1)
			return (error_exit());
		if (ft_atoi(spl[i]) == -1)
			return (error_exit());
		arr[i] = ft_atoi(spl[i]);
		i++;
	}
	free_split(spl);
	return (arr);
}

int	*if_more_2_arg(int count, char **argv, int *arr)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (ft_isDigit(argv[i + 1]) == -1)
			return (error_exit());
		if (ft_atoi(argv[i + 1]) == -1)
			return (error_exit());
		arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (arr);
}

void	create_stack_arr(int *arr, t_stacks *stacks, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_lstadd_back(&stacks->a, ft_lstnew(arr[i], 0, 0));
		i++;
	}
}

int	*sort_arr(int *arr, int count)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (arr[i] > arr[j])
			{
				arr[i] += arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] -= arr[j];
			}
			j++;
		}
		i++;
	}
	return (arr);
}

t_sort	*init_sort(int count)
{
	t_sort	*new;

	new = malloc(sizeof(t_sort));
	new->next = 1;
	new->max = count;
	new->mid = new->max / 2 + new->next;
	new->flag = 0;
	return (new);
}
