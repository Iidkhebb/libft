/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:17:09 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 16:17:35 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c = c + 32);
	return (c);
}
/*
int main ()
{
    int i = 0;
    char data[] = "HELLO";
    while (i<sizeof(data))
    {
        printf("%c",  ft_tolower(data[i]));
        i++;
    }
    
}
*/
