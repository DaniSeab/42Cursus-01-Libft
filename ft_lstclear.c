/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:10:12 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 20:58:37 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Deletes all nodes starting at input **lst
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	//if list is empty, do nothing
	if (!*lst)
		return ;
	//while *lst points to a node *
	while (*lst)
	{
		//hold adress of next node in tmp
		tmp = (*lst)->next;
		//delete and free current node
		ft_lstdelone(*lst, del);
		//set *lst to next node
		*lst = tmp;
	}
	//Nulls pointer to the list
	*lst = NULL;
}
