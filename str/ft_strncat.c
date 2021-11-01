#include "libft.h"
char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t len;
	size_t index;
	len = ft_strlen(dest);
	index = 0;

	while(src != '\0' && index < n)
	{
		dest[len + index] = src;
		src++;
		index++;
	}
	dest[len + index] = '\0';
	return(dest);
}
