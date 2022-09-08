#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str1)[i] != ((char *)str2)[i])
			return (((char *)str1)[i] - ((char *)str2)[i]);
		i++;
	}
	return (0);
}

int main()
{
    char str1[] = "RUMBAL33";
    char str2[] = "RUMBAL33545";

    printf("Real func = %d \n", memcmp(str1, str2, 11));
	 printf("My func  = %d \n", ft_memcmp(str1, str2, 11));
    return (0);
}