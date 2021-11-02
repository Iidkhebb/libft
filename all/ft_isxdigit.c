#include "libft.h"
int ft_isxdigit(int a)
{
	if ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'f') || (a >= 'A' && a <= 'F'))
		return (1);
	else 
		return (0);
}
