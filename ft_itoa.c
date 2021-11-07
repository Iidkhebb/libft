#include "libft.h"
static int len_str(int num)
{
    int len;
    len = 0;
    if (num <= 0)
        len = 1;
    while (num)
    {
        num = num / 10;
        len++;
    }
    return(len);
}
char *ft_itoa(int n)
{
    char *str;
    int i;
    long int num;
    num = n;
    i = len_str(n) - 1;
    if(!(str = (char *)malloc(len_str(n) + 1 * sizeof(char))))
        return(0);
    str[len_str(n)] = '\0';
    if (num < 0)
        num = -num;
    while (num > 0)
    {
        str[i--] = (num % 10) + '0';
        num = num / 10;
    }
    if (n < 0)
        str[i] = '-';
    if (n == 0)
        str[i] = '0';    
    return(str);
}
/*
int main ()
{
    int num = 2147483647;
    printf("%s", ft_itoa(num));
}
*/