/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:25:57 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 17:05:16 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*ptr_dst;
	char		*ptr_dest2;
	const char	*ptr_src;
	const char	*ptr_src2;

	ptr_dst = str1;
	ptr_src = str2;
	if (!(str1) && !(str2))
		return (0);
	if (ptr_dst < ptr_src)
	{
		while (n--)
			*ptr_dst++ = *ptr_src++;
	}
	else
	{
		ptr_src2 = ptr_src + (n - 1);
		ptr_dest2 = ptr_dst + (n - 1);
		while (n--)
			*ptr_dest2-- = *ptr_src2--;
	}
	return (str1);
}
