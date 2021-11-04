#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int main()
{
    int i = 0;
    char *data = "hello";
    int fd = 0;
    while(i < 5)
    {
        ft_putchar_fd(data[i], fd);
        i++;
    }
}
*/