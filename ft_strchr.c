/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:29:32 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/14 00:42:36 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	if (!*str || ch < -128 || ch > 127)
		return ((char *)str);
	while (*str)
	{
		if ((int)*str == ch)
			return ((char *)str);
		str++;
	}
	if (ch == 0)
		return ((char *)str);
	return (0);
}
