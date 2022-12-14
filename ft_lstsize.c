/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 01:02:32 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 20:59:03 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//linked list function. Returns how many nodes the list has
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	//while lst * isn't NULL, go no next node and add 1 to the node count
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
