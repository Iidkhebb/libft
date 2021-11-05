#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list tmp;
    
    if (!(lst) || !(f))
        return;
    while (lst->next != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}