#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

int main()
{
    char c;

    c = 'Q';
    printf("\nReal result for Q: %d", isalpha(c));
	 printf("\nMy result for Q: %d\n", ft_isalpha(c));
    c = 'h';
    printf("\nReal result for h: %d", isalpha(c));
	 printf("\nMy result for h: %d\n", ft_isalpha(c));
    c='+';
    printf("\nReal result for +: %d", isalpha(c));
	 printf("\nMy result for +: %d\n", ft_isalpha(c));
    c='\0';
    printf("\nReal result for \\0: %d", isalpha(c));
	 printf("\nMy result for \\0: %d\n", ft_isalpha(c));
    c='\n';
    printf("\nReal result for \\n: %d", isalpha(c));
	 printf("\nMy result for \\n: %d\n", ft_isalpha(c));
    return 0;
}