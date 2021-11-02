#include "libft.h"
char *ft_strdup(const char *s)
{
	char	*s1;
	char	*s2;
	char	*dest;

	dest = (char *)malloc((sizeof(char)) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (0);
	s1 = (char *)s;
	s2 = dest;
	while (*s1)
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';
	return (dest);
}