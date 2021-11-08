/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:05:13 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 16:09:41 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	index;
	char	*out;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	out = (char *)malloc(sizeof(char) * (len + 1));
	if (!(s) || !(out))
		return (0);
	index = start;
	i = 0;
	while (i < len && index < ft_strlen(s))
		out[i++] = ((char *)s)[index++];
	out[i] = '\0';
	return (out);
}
