/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:15:33 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 16:16:48 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c = c - 32);
	return (c);
}
/*
int main ()
{
    int i = 0;
    char data[] = "hello";
    while (i<sizeof(data))
    {
        printf("%c",  ft_toupper(data[i]));
        i++;
    }
    
}
*/
