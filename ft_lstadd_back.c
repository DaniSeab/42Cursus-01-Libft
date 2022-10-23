/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:05:04 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 19:16:04 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Adds new node to end of list
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	//if new is null, doesnt point to a node, don't add it
	if (!new)
		return ;
	//if theres no items in the list, just point to new node
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	//otherwise, hold in tmp the pointer to the last node
	tmp = ft_lstlast(*lst);
	//and set its next variable to the adress of new
	tmp->next = new;
}
