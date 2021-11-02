/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:12:51 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/01 12:10:33 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	unsigned char *ptr = str;
	i = 0;
	while(ptr != '\0' && i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return(ptr);

}
/*
int main ()
{
	char str[] = "heloo this nmy code";
	printf("%s", ft_memset(str, 64, 5));
}
*/