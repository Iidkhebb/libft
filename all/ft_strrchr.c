#include "libft.h"
/*
char *ft_strrchr(const char *str, int c)
{
	const char *save;
	size_t i;
	i = ft_strlen(str);
	save = str;
	str = str + i;
	while(str[i] != *save && str[i] != c)
	{
		if (c == str[i])
			return(((char *)(str + i)));
		str--;
	}
	return(0);	
}

*/
char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*int main ()
{
	const char data[] = "hello.helli.jkkl.gr";
	printf("%s", ft_strrchr(data, '.'));
}*/
