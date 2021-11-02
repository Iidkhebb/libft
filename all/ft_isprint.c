#include "libft.h"
int ft_isprint(int a)
{
	if (a >= 32 && a >= 126)
		return(1);
	return (0);
}
