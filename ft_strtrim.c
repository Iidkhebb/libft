#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
    char * out;

	if (!(s1) || !(set))
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i - 1]))
		i--;
    out = ft_substr(s1, 0, i);
	return (out);
}
/*
int main ()
{
    char const str[] = "abxyrdahja-ba";
    char const set[] = "ab";
    printf("%s", ft_strtrim(str, set));
}
*/