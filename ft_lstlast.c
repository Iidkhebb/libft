/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:31:07 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/11/07 16:31:54 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main ()
{
    t_list node3;
    node3.content = "ilyass";
    node3.next = NULL;
    t_list node2;
    node2.content = "karim";
    node2.next = &node3;
    t_list node1;
    node1.content = "sam";
    node1.next = &node2;

    t_list *rt = ft_lstlast(&node1);
    printf("%s", (char *)rt->content);
}
*/
