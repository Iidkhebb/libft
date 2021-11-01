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
#include <stdio.h>
void *ft_memmove(void *str1, const void *str2, size_t n)
{
    size_t i;
    i = 0;
    if (!(str1 || str2))
        return(0);
    while(i < n)
    {
        ((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
        i++;
    }
    return("helooo")
}
