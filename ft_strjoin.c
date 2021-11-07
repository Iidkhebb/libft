#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *s;

    s = (char *)malloc(ft_strlen(s1)+ft_strlen(s2) + 1);
    if ((!(s1) && !(s2)) || !(s))
        return (0);
    ft_memmove(s,s1,ft_strlen(s1));
    ft_memmove(s + ft_strlen(s1),s2,ft_strlen(s2));
    s[ft_strlen(s1)+ft_strlen(s2)] = '\0';
    return (s);
}

/*
int main ()
{
    char s1[] = "hello";
    char s2[] = "world";
    printf("%s", ft_strjoin(s1, s2));
}
*/
