int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	int	i;

	i = 0;
	while (*nptr != '\0')
	{
		i = i * 10;
		i = i + (*nptr - 48);
		nptr++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("153"));
	return (0);
}
