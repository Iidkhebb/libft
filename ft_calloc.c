/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:10:07 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 16:11:59 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	void	*ptr;

	ptr = malloc(elementCount * elementSize);
	if (ptr == NULL)
		return (0);
	ft_memset(ptr, 0, elementCount * elementSize);
	return (ptr);
}
