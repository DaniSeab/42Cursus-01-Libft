/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:14:37 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 20:58:56 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Iterates through a list applying f function to its nodes contents and returns a new list with there altered nodes. Doesn't change original list
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	//creates a node for the new list and a temporary variable
	t_list			*new_lst;
	t_list			*tmp;

	//if original list is empty, do nothing
	if (!lst)
		return (0);
	//clears trash content there might be in node *
	new_lst = 0;
	while (lst)
	{
		//tmp holds node with content copied and altered from original list
		tmp = ft_lstnew(f(lst->content));
		//if allocation fails, clear whole list and return null pointer
		if (!tmp)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		//find end of new_lst and add node stored by tmp
		ft_lstadd_back(&new_lst, tmp);
		//set lst to the next node of original list
		lst = lst->next;
	}
	return (new_lst);
}
