/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: demilan <demilan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:12:33 by demilan           #+#    #+#             */
/*   Updated: 2021/06/03 02:12:30 by demilan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content, int index, int flag)
{
	t_list	*newlst;

	newlst = malloc(sizeof(t_list));
	if (newlst)
	{
		newlst->content = content;
		newlst->index = index;
		newlst->flag = flag;
		newlst->next = NULL;
	}
	return (newlst);
}
