#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if ((int)*str == ch)
			return((char *)str);
		str++;
	}
	return (0);
}

/*
int main()
{
    char str1[] = "RUMBAL";
    char str2[] = "RUMBAL";
    char ch = 'U';

    printf("Real func = %s \n", strchr(str1, ch));
	 printf("My func  = %s \n", ft_strchr(str2, ch));
    return (0);
}
*/