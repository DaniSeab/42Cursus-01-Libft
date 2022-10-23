/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:13:30 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/09 22:12:00 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//takes a string input and translates it to an integer
int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	res;

	i = 0;
	sig = 1;
	res = 0;
	//ignore characters that arent digits
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	//if negative symbol precedes digits, store -1 in variable "sig"
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		//multiply by 10 to open new decimal place then add current string char converted to int
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	//if "sig" == -1, int becomes negative
	return (res * sig);
}
