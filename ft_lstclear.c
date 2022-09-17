/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:10:12 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/18 01:12:49 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int	i;

	i = 0;
	while (lst->next != NULL)
	{
		del(lst);	
		lst++;
		i++;
	}
	lst->content = NULL;
	(lst - i - 1)->next = NULL;
}