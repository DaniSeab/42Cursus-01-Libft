/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:14:37 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/18 01:20:22 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	unsigned int	i;
	t_list			*res;

	i = 0;
	while (lst->next != NULL)
	{
		res = ft_lstnew(lst->content);
		res->next = (lst + 1)->next;
		f(res);
		del(lst);
		lst++;
		res++;
	}
	return (res);
}
