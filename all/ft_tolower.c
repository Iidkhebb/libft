#include "libft.h"
int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
        return (c = c + 32);
    return(c);    
}
/*
int main ()
{
    int i = 0;
    char data[] = "HELLO";
    while (i<sizeof(data))
    {
        printf("%c",  ft_tolower(data[i]));
        i++;
    }
    
}
*/