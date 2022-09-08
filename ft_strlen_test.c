#include <stdio.h>
#include <string.h>
# include <unistd.h>

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

int main()
{
    char a[20]="Program";
    char b[]="Oioioioi !! \n";
	char c[]="Oio \0 ioioi !!  ";
	char d[]="";
	char e[]="\n";

    printf("Real func for a = %zu \n", strlen(a));
	printf("My func for   a  = %zu \n\n", ft_strlen(a));
    printf("Real func for b = %zu \n", strlen(b));
	printf("My func for   b  = %zu \n\n", ft_strlen(b));
    printf("Real func for c = %zu \n", strlen(c));
	printf("My func for   c  = %zu \n\n", ft_strlen(c));
    printf("Real func for d = %zu \n", strlen(d));
	printf("My func for   d  = %zu \n\n", ft_strlen(d));
    printf("Real func for e = %zu \n", strlen(e));
	printf("My func for   e  = %zu \n\n", ft_strlen(e));

    return 0;
}