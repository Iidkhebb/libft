/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:49:14 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 15:49:51 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!(lst) || !(f))
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
