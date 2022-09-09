/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:30:03 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/08 22:41:26 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_littlecheck(const char *big, const char *little, size_t i)
{
	size_t	j;	

	j = 0;
	while (big[i] == little[j] && little[j] != '\0')
	{
		i++;
		j++;
	}
	if (little[j] == '\0')
	{
		return (1);
	}
	else if (big[i] != little[j])
	{
		return (0);
	}
	return (0);
}

char	*ft_strnstr(const char	*big, const char *little, size_t n)
{
	size_t		i;
	const char	*start;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == little[0])
		{
			start = &big[i];
			if (ft_littlecheck(big, little, i) == 1)
			{
				return ((char *)start);
			}
		}
		i++;
	}
	return (0);
}
