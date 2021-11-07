#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_dest;
	size_t	s_src;

	s_dest = ft_strlen(dst);
	s_src = ft_strlen(src);
	i = 0;
	if (size <= s_dest)
		return (s_src + size);
	while (i < size - s_dest - 1 && src[i])
	{
		dst[s_dest + i] = src[i];
		i++;
	}
	dst[s_dest + i] = '\0';
	return (s_dest + s_src);
}