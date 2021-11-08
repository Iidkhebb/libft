/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:13:32 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 17:17:14 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if ((!s1 && !s2) || !s)
		return (0);
	ft_memmove(s, s1, ft_strlen(s1));
	ft_memmove(s + ft_strlen(s1), s2, ft_strlen(s2));
	s[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (s);
}
