/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:30:08 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/14 00:59:51 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int			i;
	const char	*start;

	if (!str || ch < -128 || ch > 127)
		return ((char *)str);
	i = ft_strlen(str);
	start = str;
	str += i;
	while (*str != *start && *str != ch)
		str--;
	if (*str == ch)
		return ((char *)str);
	return (0);
}
