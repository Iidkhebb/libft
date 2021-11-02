#include "libft.h"
char *  ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		while (s2[i] != '\0' && s1[i] == s2[i])
		{
			i++;
			if (s2[i] == '\0' || i == n)
				
				return ((char *)s1);
		}
		s1++;
		i = 0;
	}
	return (0);
}
/*
int main ()
{
    const char *largestring = "hello abcdefgh is my code";
    const char *smallstring = "";

    printf("%s", ft_strnstr(largestring, smallstring, 3));
}
*/