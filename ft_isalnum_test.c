#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

int	ft_isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}

int	ft_isalnum(int ch)
{
	if (ft_isdigit(ch) == 1 || ft_isalpha(ch) == 1)
		return (1);
	return (0);
}

int main()
{
    char c;

    c = '0';
    printf("\nReal result for 0: %d", isalnum(c));
	 printf("\nMy result for 0:  %d\n", ft_isalnum(c));
    c = '9';
    printf("\nReal result for 9: %d", isalnum(c));
	 printf("\nMy result for 9:  %d\n", ft_isalnum(c));
    c = 'd';
    printf("\nReal result for d: %d", isalnum(c));
	 printf("\nMy result for d:  %d\n", ft_isalnum(c));
    c = 'G';
    printf("\nReal result for H: %d", isalnum(c));
	 printf("\nMy result for H:  %d\n", ft_isalnum(c));
    c='+';
    printf("\nReal result for +: %d", isalnum(c));
	 printf("\nMy result for +:  %d\n", ft_isalnum(c));
    c='\0';
    printf("\nReal result for \\0: %d", isalnum(c));
	 printf("\nMy result for \\0: %d\n", ft_isalnum(c));
    c=EOF;
    printf("\nReal result for EOF: %d", isalnum(c));
	 printf("\nMy result for EOF: %d\n", ft_isalnum(c));
    return 0;
}