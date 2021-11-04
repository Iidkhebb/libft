#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    ft_lstlast(*lst)->next = new;
    new->next = NULL;
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
    
    t_list *ptr = &node1; 
    
    t_list new_node;
    new_node.content = "test";
    printf("%s", ft_lstlast(ptr)->content);
    
    ft_lstadd_back(&ptr, &new_node);
    
    printf("%s", ft_lstlast(ptr)->content);
}
*/