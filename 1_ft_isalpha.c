int	ft_isalpha(int ch)
{
	if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
		return (0);
	return (1);
}
