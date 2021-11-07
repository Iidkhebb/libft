/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:35:54 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 16:39:00 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (!lst)
		return (0);
	new_lst = NULL;
	while (lst->next)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (!(new_lst))
		{
			del(lst);
			free(lst);
			return (0);
		}
		new_lst = ft_lstlast(new_lst);
		new_lst->next = new_lst;
		lst = lst->next;
	}
	return (new_lst);
}
