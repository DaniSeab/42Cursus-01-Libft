/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:22:52 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/15 03:13:04 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**empty_fill(void)
{
	char	**res;

	res = malloc(sizeof(char *));
	res[0] = NULL;
	return (res);
}

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (i > 0 && s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (count > 0)
		return (count + 1);
	return (0);
}

static char	*word_fill(char *s, int start, int len, char c)
{
	char	*res;
	char	*res_trimmed;

	res = ft_substr(&s[start], start, len - start + 1);
	res_trimmed = ft_strtrim(res, &c);
	free(res);
	return (res_trimmed);
}

static void	create_words(char *s_clean, char c, char **res)
{
	int		i;
	int		j;
	int		len;
	int		start;

	i = 0;
	j = 0;
	while (s_clean[i] != '\0')
	{
		start = i;
		len = 0;
		while (s_clean[i] != c && s_clean[i++] != '\0')
			if (i == 0 || s_clean[i - 1] != c)
				len++;
		if (len > 0)
			res[j++] = word_fill(&s_clean[start], 0, len, c);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	*s_clean;
	char	**res;

	if (!*s || !c)
		return (empty_fill());
	s_clean = ft_strtrim(s, &c);
	if ((word_count(s, c)) <= 0)
		return (0);
	res = (char **)ft_calloc((word_count(s, c)), sizeof(char *));
	create_words(s_clean, c, res);
	free (s_clean);
	return (res);
}
