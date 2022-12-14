/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:28:38 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/08 21:12:25 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if input character correlates to ascii character
int	ft_isascii(int ch)
{
	if (ch < 0 || ch > 127)
		return (0);
	return (1);
}
