#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while(*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

int	main(void)
{
	ft_putstr_fd("string\n", 1);
	return (0);
}