/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:12:59 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 17:13:23 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(*to_find))
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && i + j < n)
				if (to_find[j++ + 1] == '\0')
					return ((char *)(str + i));
		}
		i++;
	}
	return (0);
}
