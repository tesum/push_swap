#include "push_swap.h"

int	ft_isDigit(char *str)
{
	int	i;

	i = -1;
	if (str[0] == '-' || str[0] == '+')
		i++;
	if (i == 0 && str[i + 1] == '\0')
		return (-1);
	while (str[++i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (-1);
	}
	return (0);
}

// if 1 number
// if list is sorted
int	check_stack_sorted(t_stacks *stacks)
{
	t_list	*check;
	int		before;

	if (ft_lstsize(stacks->a) == 1)
		return (-1);
	check = stacks->a;
	before = (int)check->content;
	check = check->next;
	while (check)
	{
		if ((int)check->content > before)
		{
			before = (int)check->content;
			check = check->next;
		}
		else
			break ;
	}
	if (check == NULL)
		return (-1);
	return (0);
}

// if 2 identical number
// if not a number
int	check_stack_identical(t_stacks *stacks)
{
	t_list	*check;
	t_list	*check1;
	int		before;
	char	*num;

	check = stacks->a;
	before = check->content;
	while (check->next)
	{
		check1 = check->next;
		while (check1)
		{
			num = ft_itoa(check1->content);
			if (check1->content == before
				|| ft_isDigit(num) == -1)
			{
				return (*error_exit());
			}
			free(num);
			check1 = check1->next;
		}
		check = check->next;
		before = check->content;
	}
	return (0);
}

// if not a argument
// if first content not a argument
int	check_stack(t_stacks *stacks)
{
	if (check_stack_identical(stacks) == -2 || check_stack_sorted(stacks) == -1)
	{
		return (-1);
	}	
	return (0);
}
