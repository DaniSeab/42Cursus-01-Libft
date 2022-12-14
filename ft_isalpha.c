/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:28:32 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/08 19:28:34 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if input character is alphabetical
int	ft_isalpha(int ch)
{
	if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
		return (0);
	return (1);
}
