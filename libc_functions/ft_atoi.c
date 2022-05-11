int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	int	i;
	int sign;

	i = 0;
	sign = 1;
	while (*nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		i = i * 10;
		i = i + (*nptr - 48);
		nptr++;
	}
	i = i * sign;
	return(i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("153"));
	return (0);
}
