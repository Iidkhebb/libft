/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:32:22 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/01 19:32:24 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr_s = s;

    ft_memset(ptr_s, 0, n);
}
/*int main ()
{
    size_t i = 0;
    char data[] = "hello";
    ft_bzero(data, sizeof(data));
    if(data[i] == '\0')
        printf("%s", "hekll");
}*/
