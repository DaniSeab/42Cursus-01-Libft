#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int ch)
{
	if (!(ch >= 48 && ch <= 57))
		return (0);
	return (1);
}

int main()
{
    char c;

    c = '0';
    printf("\nReal result for 0: %d", isdigit(c));
	 printf("\nMy result for 0:  %d\n", ft_isdigit(c));
    c = '9';
    printf("\nReal result for 9: %d", isdigit(c));
	 printf("\nMy result for 9:  %d\n", ft_isdigit(c));
    c='+';
    printf("\nReal result for +: %d", isdigit(c));
	 printf("\nMy result for +:  %d\n", ft_isdigit(c));
    c='\0';
    printf("\nReal result for \\0: %d", isdigit(c));
	 printf("\nMy result for \\0: %d\n", ft_isdigit(c));
    c=EOF;
    printf("\nReal result for EOF: %d", isdigit(c));
	 printf("\nMy result for EOF: %d\n", ft_isdigit(c));
    return 0;
}