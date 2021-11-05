#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;    
    
    str = ft_strdup(s);
    if (!(s) || !(f) || !(str))
        return(0);
    i = 0;
    while (str[i])
    {
        str[i] = f(i, str[i]);
        i++;
    }
    return(str);
}