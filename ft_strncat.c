/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:03:19 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 16:04:44 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(dest);
	index = 0;
	while (src != '\0' && index < n)
	{
		dest[len + index] = *src;
		src++;
		index++;
	}
	dest[len + index] = '\0';
	return (dest);
}
