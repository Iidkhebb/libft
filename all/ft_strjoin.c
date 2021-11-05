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
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2 ||
		!(new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
*/
/*
int main ()
{
    char s1[] = "hello";
    char s2[] = "world";
    printf("%s", ft_strjoin(s1, s2));
}
*/