/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:22:52 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/16 01:50:26 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**empty_fill(void)
{
	char	**res;

	res = malloc(sizeof(char **) * 1);
	if (!res)
		return (0);
	res[0] = NULL;
	return (res);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (i > 0 && s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count + 1);
}

static void	create_words(char *s_clean, char c, char **res)
{
	int		i;
	int		j;
	int		st;

	i = 0;
	j = 0;
	while (s_clean[i] != '\0')
	{
		st = i;
		while (s_clean[i] != c && s_clean[i] != '\0')
		{
			if (i - st > 0 && (s_clean[i + 1] == c || s_clean[i + 1] == '\0'))
			{
				res[j] = ft_substr(&s_clean[st], 0, i - st + 1);
				j++;
			}
			i++;
		}
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	*s_clean;
	char	**res;

	if (!*s || !c)
		return (empty_fill());
	s_clean = ft_strtrim(s, &c);
	count = (word_count(s, c));
	if (count <= 0)
		return (empty_fill());
	res = (char **)ft_calloc(count + 1, sizeof(char *));
	create_words(s_clean, c, res);
	free (s_clean);
	return (res);
}
