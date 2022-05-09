
#include <stdlib.h>

// Gets the lenght of char *str
int ft_strlen(const char *str)
{
	int len;
	
	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

// Checks whether c is present in *set
int ft_is_in_set(char c, const char *set)
{
	while(*set != '\0')
	{
		if (c == *set)
			return  (1);
		else
			set++;
	}
	return (0);
}

// To date, creates a duplicate of s1 without chars in *set
// Must do this only in begining and end of string
char *ft_strtrim(const char *s1, const char *set)
{
	char    *s2;
	int     i;
	
	i = 0;
	s2 = malloc(ft_strlen(s1) * sizeof(char));
	while (*s1 != '\0')
	{
		if(!ft_is_in_set(*s1, set))
		{
			*s2 = *s1;
			s2++;
		}
		s1++;
	}
	return (s2 - 5);
}

// Tests created functions and compares them with some of the originals
int main()
{
	printf("%lu\n", strlen("Hello"));
	printf("%i\n", ft_strlen("Hello"));
	printf("%s\n", "abaHello");
	printf("%s\n", ft_strtrim("abaHebllo", "ab"));
	return (0);
}
