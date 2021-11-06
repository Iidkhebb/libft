#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char *out;
    size_t size;
	char *save;

	i = 0;
    size = ft_strlen(s1) + ft_strlen(s2);
    out = malloc(sizeof(size + 1));
	if ((!(s1) || !(s2)) || !(out))
		return (0);
	save = (char *)s1;	
	ft_memmove(out , save, ft_strlen(save));
	while (s2[i] != '\0' && i < size)
	{
		out[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	out[size] = '\0';
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