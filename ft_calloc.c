/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:13:36 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/15 00:38:50 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//remake of calloc function. Mallocs nitems of size in heap memory and sets slots to 0
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	//if call to function doesnt want to allocate anything OR wants to allocate more than mallocs limit per the manual
	if (nitems == 0 || size == 0 || nitems >= 2147483647 / size)
		return (NULL);
	p = malloc(size * nitems);
	//if malloc fails
	if (!p)
		return (NULL);
	ft_bzero(p, nitems * size);
	return (p);
}
