/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:39:58 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 15:40:20 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s1;
	char	*s2;
	char	*dest;

	dest = (char *)malloc((sizeof(char)) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (0);
	s1 = (char *)s;
	s2 = dest;
	while (*s1)
	{
		*s2 = *s1;
		s1++;
		s2++;
	}
	*s2 = '\0';
	return (dest);
}
