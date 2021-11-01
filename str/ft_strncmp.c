int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;
	i = 0;

	if(n == 0)
		return (0);
	while(str1[i] == str2[i] && str1[i] != '\0')
	{
		if(i < (n - 1))
			i++;
		else
			return(0);
	}
	return((unsigned char str1[i]) - (unsigned char str2[i]))
}
