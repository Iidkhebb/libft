#include "libft.h"

void printlist(t_list *head)
{
	t_list *tmp = head;
	while(tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
}

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!(new))
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}



int main ()
{
	t_list *head = NULL;
	t_list *tmp;

	void *scr = "hello";
	int i = 0;
	while(i < 6)
	{
		tmp = ft_lstnew(scr);
		tmp->next = head;
		head = tmp;
		i++;
	}
	printlist(head);
}
