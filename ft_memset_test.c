
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *dest, int ch, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = ch;
		i++;
	}
	return (dest);
}

int main()
{
    char dest1[4];
    char dest2[4];
    char dest3[] = "olar";
    char dest4[] = "olar";
    char dest5[] = "1111111111";
    char dest6[] = "1111111111";

	memset(dest1, '%', 3);
	ft_memset(dest2, '%', 3);
	printf("Real func = %s \n", dest1);
	printf("My func   = %s \n\n", dest2);

	memset(dest3, '%', (0));
	ft_memset(dest4, '%', (0));
	printf("Real func = %s \n", dest3);
	printf("My func   = %s \n\n", dest4);
    
	memset(dest5, 'a', 9);
	ft_memset(dest6, 'a', 9);
	printf("Real func = %s \n", dest5);
	printf("My func   = %s \n\n", dest6);

	return (0);
}
