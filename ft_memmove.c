/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:29:20 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 19:37:28 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* replicates the string.h function memmove.
Function copies n bytes from memory area src to memory area dest. Is overlap safe.	
Overlap means that they share memory area. eg: if adress of dest comes before src
src   =    [b][c][d] 
dest  = [a][b][c]
result= [b][c][d]
i can copy freely from src to dest from left to right; but if address of dest comes after
src   = [a][b][c]
dest  =    [b][c][d]
result=    [a][a][a]
when i go to copy slot [b] it has already been replaced by [a]. So i need to copy from
back to front in this case.
*/
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;

	if (!src || !dest || len == 0)
		return (dest);
	i = len - 1;
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	while (i > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i--;
	}
	((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
