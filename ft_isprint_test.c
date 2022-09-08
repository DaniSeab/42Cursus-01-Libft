#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int ch)
{
	return (ch >= 32 && ch <= 126);
}

int main()
{
    char c;

    c = 3;
    printf("\nReal result for 3: %d", isprint(c));
	 printf("\nMy result for 3:  %d\n", ft_isprint(c));
    c = '9';
    printf("\nReal result for 9:   %d", isprint(c));
	 printf("\nMy result for 9:    %d\n", ft_isprint(c));
    c = 127;
    printf("\nReal result for 127: %d", isprint(c));
	 printf("\nMy result for 127:  %d\n", ft_isprint(c));
    c = 'G';
    printf("\nReal result for H:   %d", isprint(c));
	 printf("\nMy result for H:    %d\n", ft_isprint(c));
    c='\66';
    printf("\nReal result for \\66: %d", isprint(c));
	 printf("\nMy result for \\66:  %d\n", ft_isprint(c));
    c='\0';
    printf("\nReal result for \\0:  %d", isprint(c));
	 printf("\nMy result for \\0:   %d\n", ft_isprint(c));
    c=EOF;
    printf("\nReal result for EOF:   %d", isprint(c));
	 printf("\nMy result for EOF:    %d\n", ft_isprint(c));
    return 0;
}