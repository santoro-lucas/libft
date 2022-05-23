
#include <stdlib.h>

// Invokes ft_strlen
int	ft_strlen(const char *str);

// Checks whether c is present in *set
static int ft_isinset(char c, const char *set)
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
	char	*s2;
	int		i;
	
	i = 0;
	s2 = malloc(ft_strlen(s1) * sizeof(char) + 1);
	while(ft_isinset(*s1, set))
		s1++;
	while (*s1 != '\0')
	{
		*s2 = *s1;
		s1++;
		s2++;
		i++;
	}
	s1--;
	s2--;
	i--;
	while(ft_isinset(*s1, set))
	{
		*s2 = '\0';
		s1--;
		s2--;
		i--;
	}
	return (s2 - i);
}

// Tests created functions and compares them with some of the originals
#include <stdio.h>
int main()
{
	printf("%s\n", "++--+-+//*Hel++lo**/*+++-");
	printf("%s\n", ft_strtrim("++--+-+//*Hel+*+lo**/*++*+-", "+-*/"));
	return (0);
}
