#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    size_t  index;
    char *out;
    if (len > ft_strlen(s))
        len = ft_strlen(s);
    out = (char *)malloc((sizeof(char)) * (len + 1));
	if (!(s) || !(out))
        return(0);
    index = start;
    i = 0;
    while (i < len && index < ft_strlen(s))
        out[i++] = ((char *)s)[index++];
    out[i] = '\0';
    return(out);
}


/*
int main()
{
    const char ptr[] = "12";
    printf("%s", ft_substr(ptr, 1, 15));
}
*/