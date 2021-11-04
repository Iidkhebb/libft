#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    int i;
    i = 0;

	while(lst->next != NULL)
	{
		lst = lst->next;
	}
    return(lst);
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