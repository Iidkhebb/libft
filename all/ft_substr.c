#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t	i;
    char *str;

	i = 0;
    str = (char *)malloc(len + 1);
	if (!(s) || !(str) || (start >= len))
        return(0);
    while (len != 0 && i <= ft_strlen(s))
    {
        str[i] = ((char *)s)[start];
        start++;
        i++;
        len--;
    }
    str[i] = '\0';
    return(str);
    
}
    
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s || !(new_str = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
*/

/*
int main()
{
    const char ptr[] = "12";
    printf("%s", ft_substr(ptr, 1, 15));
}

*/