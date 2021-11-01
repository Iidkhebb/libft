/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:45:25 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/01 13:09:25 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    i = 0;
    
    while(((unsigned char *)str)[i] != '\0' && i < n)
    {
        if ((unsigned char)c == ((unsigned char *)str)[i])
            return((void *)(str + i));
        i++;
    }
    return(0);
}
int main()
{
    const char str[] = "hello.temm";
    char *data;

    data = (char *)(ft_memchr(str, 46, 12));
    printf("%s", data);
}
