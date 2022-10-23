/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:06:50 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 20:58:41 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Deletes and frees 1 node
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	//if theres no input node, do nothing
	if (!lst)
		return ;
	//use function del to delete content of node
	del(lst->content);
	//free mallocated node memory
	free(lst);
}
