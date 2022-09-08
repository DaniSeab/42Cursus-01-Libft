#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int ch, size_t n)
{
	while ((str) && (n > 0))
	{
		if ((*(char *)str) == (char)ch)
			return ((void*)(str));
		n--;
		str++;
	}
	return (0);
}

int main()
{
    char str1[] = "RUMBAL";
    char str2[] = "RUMBAL";
    char ch = 'U';

    printf("Real func = %s \n", (char *)memchr(str1, ch, 2));
	 printf("My func  = %s \n", (char *)ft_memchr(str2, ch, 2));
    return (0);
}