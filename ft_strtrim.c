/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:15:38 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/13 03:20:40 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	i;
	
	end = ft_strlen(s1) - 1;
	i = 0;
	while (s1 && ft_strchr(set, s1[i]))
		i++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, 0, (size_t)(end - i + 2)));
}
	