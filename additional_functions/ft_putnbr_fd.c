#include <unistd.h>

void	putdigit(int d, int fd)
{
	d = '0' + d;
	write(fd, &d, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n / 10 < 1)
		putdigit(n % 10, fd);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
