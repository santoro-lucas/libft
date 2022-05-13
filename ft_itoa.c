#include <stdlib.h>

char	*ft_itoa(int n)
{
	char *result;

	result = malloc(sizeof(char) * alguem);

	if (n < 10)
		*result = n;
	if (n > 10)
		ft_itoa(n/10);
}