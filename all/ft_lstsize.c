#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int i;
    i = 0;

	while(lst != NULL)
	{
		lst = lst->next;
        i++;
	}
    return(i);
}
/*
int main ()
{
	t_list *head = NULL;
	t_list *tmp;

	int i = 0;

    void *scr = "hello";
	while(i < 6)
	{
		tmp = ft_lstnew(scr);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printf("%d", ft_lstsize(tmp));
}
*/
