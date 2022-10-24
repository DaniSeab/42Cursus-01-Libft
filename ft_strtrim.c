/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:15:38 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/26 22:00:09 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//trims chars from set from both ends of string s1
char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		i;

	end = ft_strlen(s1) - 1;
	i = 0;
	if (ft_strlen(set) == 0)
		return (ft_strdup((char *)s1));
	while (s1 && ft_strchr(set, s1[i]))
		i++;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	if ((end - i + 1) >= 0)
		return (ft_substr(s1, i, (size_t)(end - i + 1)));
	return ((ft_calloc(1, sizeof(char))));
}
