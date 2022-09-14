/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:13:36 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/14 19:26:15 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	if ((nitems * size) / size != nitems)
        return (NULL);
	p = malloc(size * nitems);
	if (!p)
		return (NULL);
	ft_bzero(p, nitems * size);
	return (p);
}
