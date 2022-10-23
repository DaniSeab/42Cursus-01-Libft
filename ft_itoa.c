/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:27:23 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/18 00:11:20 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//turns an integer input into a string
char	*ft_itoa(int n)
{
	//INT_DIGITS_BUFFER_SIZE == the most digits an int can have in a 64-bit machine + 1 for negative signal + 1 for \0 to close string
	char	buffer[INT_DIGITS_BUFFER_SIZE];
	char	*res;
	int	isnegative;

	//res points to memory slot after last slot of buffer
	res = buffer + INT_DIGITS_BUFFER_SIZE;
	//res moves 1 house back, pointing to last slot of buffer and closes the string
	*--res = '\0';
	isnegative = 0;
	//isnegative works as a boolean, informing if int n is negative
	if (n < 0)
		isnegative = 1;
	if (n == 0)
		*--res = '0';
	//walks pointer 1 slot previous and sets it to the value of last decimal place of int n 
	while (n != 0)
	{
		//if number is positive
		if (n > 0)
			*--res = 48 + (n % 10);
		//if number is negative
		else
			*--res = 48 - (n % 10);
		n /= 10;
	}
	if (isnegative == 1)
		*--res = '-';
	//duplicates string starting at first filled slot, so we return a result without extra empty slots
	return (ft_strdup(res));
}
