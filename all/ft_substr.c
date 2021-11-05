#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    size_t  index;
    char *str;
    
    str = (char *)malloc(len + 1);
	if (!(s) || !(str))
        return(0);
    index = start;
    i = 0;
    while (i < len && index < ft_strlen(s))
    {
        str[i] = ((char *)s)[index];
        index++;
        i++;
    }
    str[i] = '\0';
    return(str);
    
}

/*
int main()
{
    const char ptr[] = "12";
    printf("%s", ft_substr(ptr, 1, 15));
}
*/