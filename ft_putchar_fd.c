/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:24:56 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 15:25:20 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    int i = 0;
    char *data = "hello";
    int fd = 0;
    while(i < 5)
    {
        ft_putchar_fd(data[i], fd);
        i++;
    }
}
*/
