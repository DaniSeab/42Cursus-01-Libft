/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:22:52 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/14 21:57:10 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_count(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i > 0 && s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count + 1);
}

char	*word_fill(char *s, int start, int i, char c)
{
		char	*res;
		char	*res_trimmed;
				
		res = ft_substr(&s[start], start, i - start + 1);
		res_trimmed = ft_strtrim(res, &c);
		free(res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	*s_clean;
	char 	**res;

	if (!s || !c)
		return (0);
	s_clean = ft_strtrim(s, &c);
	res = (char **)ft_calloc((word_count(s, c)), sizeof(char *));
	printf("res = %zu", sizeof(res));
	i = 0;
	j = 0;
	while (s_clean[i] != '\0')
	{
		start = i;
		while (s_clean[i] != c)
		{
			if (i == 0 || s_clean[i - 1] != c)
				i++;
		}
		res[j] = word_fill(&s_clean[i], start, i, c)
		i++;
		j++;
	}
	free (s_clean);
	return (res - (j + 1));
}

int main(void)
{
	char **tab = ft_split("  tripouille         42  ", ' ');
	printf("ft_split  tripouille  42  = \n 00 - %zu\n 01 - %zu\n", tab[0], tab[1]);
	return (0);
}
