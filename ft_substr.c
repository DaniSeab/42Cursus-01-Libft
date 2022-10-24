/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:41:27 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/14 02:45:45 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//creates a string based off s starting at index start with len size.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	//if theres no index start in s, return 1 mallocated NULL byte
	if (start >= ft_strlen(s))
	{
		res = ft_calloc(1, 1);
		return (res);
	}
	//to avoid trailing off the string, test if desired new string fits inside s
	if ((len + (size_t)start) > ft_strlen(s))
		//if it does not, set len to the max size it can have
		len = ft_strlen(s) - (size_t)start;
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (0);
	while (i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
