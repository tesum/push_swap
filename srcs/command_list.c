#include "push_swap.h"

t_commands	*create_command(char *s)
{
	t_commands	*command;

	command = malloc(sizeof(t_commands));
	if (!command)
		exit(ERR_MALLOC);
	command->command = s;
	command->next = NULL;
	return (command);
}

void	add_command(t_commands *list, char *s)
{
	t_commands	*new;
	t_commands	*last;

	new = create_command(s);
	if (list->next == NULL)
		list->next = new;
	else
	{
		last = list;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}
}
