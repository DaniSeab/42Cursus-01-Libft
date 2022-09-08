#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int ch)
{
	if (ch < 0 || ch > 127)
		return (0);
	return (1);
}

int main()
{
    char c;

    c = '中';
    printf("\nReal result for 中: %d", isascii(c));
	 printf("\nMy result for 中:  %d\n", ft_isascii(c));
    c = '9';
    printf("\nReal result for 9: %d", isascii(c));
	 printf("\nMy result for 9:  %d\n", ft_isascii(c));
    c = 'd';
    printf("\nReal result for d: %d", isascii(c));
	 printf("\nMy result for d:  %d\n", ft_isascii(c));
    c = 'G';
    printf("\nReal result for H: %d", isascii(c));
	 printf("\nMy result for H:  %d\n", ft_isascii(c));
    c='\66';
    printf("\nReal result for \\66: %d", isascii(c));
	 printf("\nMy result for \\66:  %d\n", ft_isascii(c));
    c='\0';
    printf("\nReal result for \\0: %d", isascii(c));
	 printf("\nMy result for \\0: %d\n", ft_isascii(c));
    c=EOF;
    printf("\nReal result for EOF: %d", isascii(c));
	 printf("\nMy result for EOF: %d\n", ft_isascii(c));
    return 0;
}