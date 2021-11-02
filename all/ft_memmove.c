/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:25:57 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/01 14:45:37 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *ft_memmove(void *str1, const void *str2, size_t n)
{
    size_t i;
    i = 0;
    char *ptr_dst = str1;
    const char *ptr_src = str2;

    if (ptr_dst < ptr_src)
    {
        while (n--)
            *ptr_dst++ = *ptr_src++;
    }
    else
    {
        const char *ptr_src2 = ptr_src + (n - 1);
        char *ptr_dest2 =  ptr_dst + (n - 1);
        while(n--)
            *ptr_dest2-- = *ptr_src2--;
    }
    return(str1);
}
