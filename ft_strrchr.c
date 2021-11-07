/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:28:48 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 15:30:08 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*save;

	save = str;
	str = (str + ft_strlen(str));
	while (*str != *save && *str != (unsigned char)c)
	{
		str--;
	}
	if ((unsigned char)c == *str)
		return ((char *)(str));
	return (0);
}

/*

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
*/
/*int main ()
{
	const char data[] = "hello.helli.jkkl.gr";
	printf("%s", ft_strrchr(data, '.'));
}*/
