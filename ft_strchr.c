/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:25:46 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 15:26:53 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (unsigned char)c && *str != '\0')
		str++;
	if (*str == (unsigned char)c)
		return ((char *)(str));
	return (0);
}
