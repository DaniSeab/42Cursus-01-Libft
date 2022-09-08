int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (str1[i] != '\0' && str2[i] != '\0' && i < n && str1[i] == str2[i])
	{
		i++;
	}
	if (i == n)
	{
		return ((int)str1[i - 1] - (int)str2[i - 1]);
	}
	return ((int)str1[i] - (int)str2[i]);
}
