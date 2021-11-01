int ft_isspace(int a)
{
	if (a == ' ') || (a == '\t') || (a == '\r') || (a == '\n') || (a == '\v') || (a == '\f')
		return (1);
	else
		return (0);
}
