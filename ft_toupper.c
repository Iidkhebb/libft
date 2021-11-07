#include "libft.h"
int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
        return (c = c - 32);
    return(c);    
}
/*
int main ()
{
    int i = 0;
    char data[] = "hello";
    while (i<sizeof(data))
    {
        printf("%c",  ft_toupper(data[i]));
        i++;
    }
    
}
*/