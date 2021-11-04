#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;
    
    if (!(s) || !(f))
        return(0);
    i = 0;
    str = ft_strdup(s);

    while (str)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return(str);
}