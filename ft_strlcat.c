/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:29:40 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 19:49:58 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copies string.h function strlcat. concatenate two strings
/* appends the NUL-terminated string src to the end of dst. 
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;
	size_t	dest_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (size <= dest_size)
		return (size + src_size);
	i = 0;
	while (src[i] != '\0' && (dest_size + i) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	//return the total length of the string it tried to create
	return (dest_size + src_size);
}
