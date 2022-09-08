#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_needleckeck(char *big, char *little, int i)
{
	int	j;	

	j = 0;
	while (big[i] == little[j] && little[j] != '\0')
	{
		i++;
		j++;
	}
	if (little[j] == '\0')
	{
		return (1);
	}
	else if (big[i] != little[j])
	{
		return (0);
	}
	return (0);
}

char	*strnstr(const char	*big, const char *little, size_t n)
{
	size_t		i;
	const char	*start;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		if (big[i] == little[0])
		{
			start = &big[i];
			if (ft_check(big, little, i) == 1)
			{
				return ((char *)start);
			}
		}
		i++;
	}
	return (0);
}
