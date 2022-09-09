/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:29:57 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/10 01:32:23 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (str1[i] != '\0' && str2[i] != '\0' && i < n && str1[i] == str2[i])
	{
		i++;
	}
	if (i == n)
	{
		return ((int)str1[i - 1] - (int)str2[i - 1]);
	}
	return ((int)str1[i] - (int)str2[i]);
}
