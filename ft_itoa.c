/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:27:23 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/13 04:13:15 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_digits(int n)
{
	int count;

	count = 0;

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
	if (n < 0)
	{
		res = ft_calloc(i + 2, sizeof(char));
		res[0] = '-';
		n *= -1;
	}
	else
		res = ft_calloc(i + 1, sizeof(char));
	if (!res)
		return (0);
	res[i] = '\0';
	n--;
	while (n != 0)
	{
		res[--i] = (n % 10) + 48;
		i--;
		n /= 10; 
	}
	printf("CHAR IN = %s\n", res);
	return (res);
}

int main ()
{
	int n = 900;
	char *s;

	s = ft_itoa(n);
	printf("NUM = %d, CHAR = %s\n", n, s);
}