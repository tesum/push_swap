#include "push_swap.h"

static int	check_cmd(t_stacks *stacks, char *cmd, t_commands *cmds)
{
	if (ft_strlen(cmd) > 3)
		return (-1);
	if (!ft_strncmp(cmd, "pa", 3))
		pa(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "pb", 3))
		pb(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "sa", 3))
		sa(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "sb", 3))
		sb(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "ss", 3))
		ss(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "ra", 3))
		ra(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "rb", 3))
		rb(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "rra", 3))
		rra(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "rrb", 3))
		rrb(stacks, cmds, 0);
	else if (!ft_strncmp(cmd, "rrr", 3))
		rrr(stacks, cmds, 0);
	else
		return (-1);
	return (1);
}

int	checker_sort(t_stacks *stacks, int *arr, int count, t_commands *cmds)
{
	char	*cmd;

	cmd = NULL;
	create_stack_arr(arr, stacks, count);
	if (check_stack_identical(stacks) < 0)
		exit(1);
	while (get_next_line(0, &cmd))
	{
		if (check_cmd(stacks, cmd, cmds) == -1)
			return (*error_exit());
		free(cmd);
	}
	if (check_stack_sorted(stacks) == -1 && !stacks->b)
	{
		write(1, "OK\n", 3);
		exit(1);
	}
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int			*arr;
	int			count;
	char		**spl;
	t_stacks	*stacks;
	t_commands	*cmds;

	cmds = create_command("start");
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
	if (!checker_sort(stacks, arr, count, cmds))
		return (*error_exit());
}
