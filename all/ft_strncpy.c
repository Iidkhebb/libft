#include "libft.h"
char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t index;

	index = 0;
	while((src != '\0') && index < n)
	{
		dest[index] = *src;
		src++;
		index++;
	}
	while(index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return(dest);
}
