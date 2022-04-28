#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)

void	putdigit(int d)
{
	d = '0' + d;
	write(1, &d, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n / 10 < 1)
		putdigit(n % 10);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}