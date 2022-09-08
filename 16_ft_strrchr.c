#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strrchr(const char *str, int ch)
{
	int			i;
	const char	*start;

	i = ft_strlen(str);
	start = str;
	str += i;
	while (*str != *start && *str != ch)
		str--;
	if (*str == ch)
		return ((char *)str);
	return (0);
}

/*
int main()
{
    char str1[] = "RUMBAMLOC";
    char str2[] = "RUMBAMLOC";
    char ch = 'M';

    printf("Real func = %s \n", strrchr(str1, ch));
	 printf("My func  = %s \n", ft_strrchr(str2, ch));
    return (0);
}
*/
