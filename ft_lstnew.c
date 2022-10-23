/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:54:59 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 20:59:00 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Creates new node.
t_list	*ft_lstnew(void *content)
{
	//creates new variable * to hold a type t_list
	t_list	*new;

	//mallocates heap memory of size t_list, to contain the variables visible in .h file
	new = (t_list *)malloc(sizeof(t_list));
	//if malloc fails, return null *
	if (!new)
		return (0);
	//sets nodes "content" variable to input content
	new->content = content;
	//sets nodes "next" variable to NULL
	new->next = NULL;
	return (new);
}
