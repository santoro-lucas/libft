
#include <stdlib.h>
// Checks whether char c is in string set
int	is_in_set(char	c, char *set)
{
	while(*set != '\0')
	{
		if(c == *set)
			return (1);
		else
			set++;
	}
	return (0);
}

// Returns the lenght of str
int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (*str++ !='\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;

	s2 = malloc(ft_strlen(s1) * sizeof(char));
	while(*s1 != '\0')
	{
		if(is_in_set)
			s1++;
		else
		{
			*s2 = *s1;
			s1++;
			s2++;
		}
	}
	s2 = s2 - ft_strlen(s2);
}

#include <stdio.h>
int	main(void)
{
	char 	string[] = "ATem dias que a noite é foda ";
	char	to_trim[] = "A";

	printf("%s\n", string);
	printf("%s\n", ft_strtrim("ATem dias que a noite é foda", "A"));
	//free(ft_strtrim);
	return (0);
}
