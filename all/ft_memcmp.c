/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:40:50 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/01 12:41:59 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *str1, const void *str2, size_t n) 
{
	size_t i; i = 0;

	while( i < n) 
	{
		if (( (unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return(((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

/*int main ()
{
	char str1[] = "hello";
	char str2[] = "helglo";

	printf("%d", ft_memcmp(str1, str2, 4));
}*/

