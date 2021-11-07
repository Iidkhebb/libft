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
	i = 0;
	
	while(i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return(str);

}
/*
int main ()
{
	char str[] = "bbbbgh";
	printf("%s", ft_memset(str, 'a', 2));
}
*/