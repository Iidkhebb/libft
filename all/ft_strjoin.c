#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char	*out;
    size_t size;

	i = 0;
    size = ft_strlen(s1) + ft_strlen(s2);
    out = malloc(sizeof(char) * (size + 1));
	if ((!(s1) && !(s2)) || !(out))
		return (0);
	ft_memmove(out , s1, ft_strlen(s1));
    while (i < size)
	{
		out[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
/*
int main ()
{
    char s1[] = "hello";
    char s2[] = "world";
    printf("%s", ft_strjoin(s1, s2));
}
*/