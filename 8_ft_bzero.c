#include "libft.h"

 void	ft_bzero(void *dest, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = '\0';
		i++;
	}
	return (dest);
}