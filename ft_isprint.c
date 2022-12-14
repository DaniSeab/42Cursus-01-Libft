/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:28:53 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/08 19:28:55 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if input character is a printable ascii character
int	ft_isprint(int ch)
{
	return (ch >= 32 && ch <= 126);
}
