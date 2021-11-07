#include "libft.h"
char *ft_strcat(char *dest, const char *src)
{
	int index;
	index = ft_strlen(dest);	
	while(src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}
	dest[index] = '\0';
	return(dest);
}
