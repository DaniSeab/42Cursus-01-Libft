/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 03:22:52 by dlima-se          #+#    #+#             */
/*   Updated: 2022/09/19 23:18:25 by dlima-se         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns vaules for empty input string or empty input separator char
static char	**empty_fill(int sig, const char *s)
{
	char	**res;

	if (sig == 1)
	{
		res = malloc(sizeof(char **) * 1);
		if (!res)
			return (0);
		res[0] = NULL;
	}
	if (sig == 2)
	{
		res = malloc(sizeof(char **) * 2);
		res[0] = ft_strdup((char *)s);
		res[1] = NULL;
	}
	return (res);
}

//frees all res[ ] before res[j]
static void	free_all(char **res, int j)
{
	while (j)
		free(res[j--]);
}

//counts number of words between separator char c
static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		//if current char isn't c and next one is c or EOF, we've found the end of a word
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		//otherwise, continue iterating without adding to count
		i++;
	}
	return (count);
}

//mallocaets space for individual word and sets ** slot to its adress
static int	create_words(char const *s, char c, char **res)
{
	int	i;
	int	j;

	j = 0;
	while (*s)
	{
		i = 0;
		//while not at a separator or EOF
		while (s[i] != c && s[i] != '\0')
		{
			//if we find the end of the word
			if ((s[i + 1] == c || s[i + 1] == '\0'))
			{
				//set ** to substring of current pointer, with lenght of word + 1
				res[j] = ft_substr(s, 0, i + 1);
				//if theres an allocation error, return number of current word
				if (!res[j])
					return (j);
				//
				j++;
			}
			i++;
		}
		//if we find a char c we continue previous while, if EOF, ends it
		if (s[i] != '\0')
			i++;
		//turns pointer to begining of next word, after char c
		s += i;
	}
	return (0);
}

//splits a string into words using char c as a separator
char	**ft_split(char const *s, char c)
{
	int	count;
	char	**res;
	int	test;

	//if theres no input string return a pointer to a NULL pointer
	if (!*s)
		return (empty_fill(1, s));
	//if theres no input separator return an pointer to original s
	if (!c)
		return (empty_fill(2, s));
	count = (word_count(s, c));
	//if there is nothing in between separator chars, return  pointer to a NULL pointer
	if (count <= 0)
		return (empty_fill(1, s));
	//otherwise mallocates number of words ** slots
	res = (char **)ft_calloc(count + 1, sizeof(char *));
	//create words returning a signal test
	test = create_words(s, c, res);
	// test == 0 if all words are created without error
	if (test == 0)
		return (res);
	//if theres an error, test will have the value of the word the error occurred on
	else
	{
		//free all prevoius words allocated before the one with an error
		free_all(res, test);
		//free **
		free(res);
		return (0);
	}
}
