/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:03:57 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 20:58:52 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Finds and returns last node of list
t_list	*ft_lstlast(t_list *lst)
{
	//if input * is null, return null *
	if (!lst)
		return (0);
	//while theres any value in node's "next" variable, go to next node
	while (lst->next)
		lst = lst->next;
	//return the node with "NULL" in its "next" variable, as it's the last
	return (lst);
}
