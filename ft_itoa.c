/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:27:23 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/14 02:55:54 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 1;
	if (n == 0)
		return (2);
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = ft_count_digits(n);
	res = ft_calloc(i, sizeof(char));
	if (!res)
		return (0);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	if (n == 0)
		*res = '0';
	i -= 2;
	while (n != 0)
	{
		res[i] = (n % 10) + 48;
		i--;
		n /= 10;
	}
	return (res);
}
