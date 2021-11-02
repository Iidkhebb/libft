#include "libft.h"
int ft_ispunct(int a)
{
	if ((a >= 33 && a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 126))
		return (1);
	else
		return (0);
}


