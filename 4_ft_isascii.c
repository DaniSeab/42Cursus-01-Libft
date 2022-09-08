int	ft_isascii(int ch)
{
	if (ch < 0 || ch > 127)
		return (0);
	return (1);
}