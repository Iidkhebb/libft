#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    f(lst->content);
}