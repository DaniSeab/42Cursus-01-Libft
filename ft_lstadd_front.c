/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:00:24 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 20:58:31 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Adds new node to beggining of list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	//if new points to Null, don't add it
	if (!new)
		return ;
	//if list is empty, just point lst to new node
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	//otherwise, set new's "next" variable to adress of lst (head), which is the adress of 1st node
	new->next = *lst;
	//set lst(head) to hold the adress of new node
	*lst = new;
}
