/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:27:23 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/15 20:41:27 by dlima-se         ###   ########.fr       */
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

char	*min_max_num(int n)
{
	char	*res;

	if (n == -2147483648)
	{
		res = ft_calloc(12, sizeof(char));
		res = "-2147483648";
		return (res);
	}
	res = ft_calloc(11, sizeof(char));
	res = "2147483647";
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	if (n == -2147483648 || n == 2147483647)
		return (min_max_num(n));
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
