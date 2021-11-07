/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:09:14 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 17:11:05 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	index;

	index = ft_strlen(dest);
	while (src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}
	dest[index] = '\0';
	return (dest);
}
