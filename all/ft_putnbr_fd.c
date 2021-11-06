#include "libft.h"
static void	data(char c, int fd)
{
	write(fd, &c, 1);
}

static void	ft_putnbr(int nb, int fd)
{	
	if (nb < -2147483647)
	{
		write(fd, "-2147483648", 11);
	}
	if (nb < 0 && nb > -2147483648)
	{
		nb = -nb;
		data('-', fd);
	}
	if (nb < 10 && nb >= 0 )
	{
		data(nb + 48, fd);
	}	
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
		data(nb % 10 + 48, fd);
	}	
}
void ft_putnbr_fd(int n, int fd)
{
    ft_putnbr(n, fd);
}
/*
int main ()
{
    int n = -2147483648;
    int fd = 1;
    ft_putnbr_fd(n, fd);
}
*/