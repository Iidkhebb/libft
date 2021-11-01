int ft_iscntrl(int a)
{
	if ((a >= 0 && a <= 31) || (a == 127))
	       return (1);
	else
		return (0);
}
