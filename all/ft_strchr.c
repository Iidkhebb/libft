#include "libft.h"
char *ft_strchr(const char *str, int c)
{
	while(*str != (unsigned char)c && *str != '\0')
		str++;
	if(*str == (unsigned char)c)
		return((char *)(str));
	return(0);
}