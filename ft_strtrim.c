
#include <stdlib.h>
#include <stdio.h>

// Links ft_strlen
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

// Ignoresj
char *ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	int		end;
	int		pos;

	while (ft_isinset(*s1, set))
		s1++;
	end = ft_strlen(s1) - 1;
	while (ft_isinset(s1[end], set))
		end--;
	s2 = malloc(end * sizeof(char) + 2);
	pos = 0;
	while (pos <= end)
	{
		s2[pos] = s1[pos];
		pos++;
	}
	s2[pos] = '\0';
	return (s2);
}

// Tests created functions and compares them with some of the originals
// int main(void)
// {
// 	char *string = "---------------+-+-+-+-+-+-+-+-+-+----W + o + r + d-----+++----";

// 	printf("%s\n", string);
// 	printf("%s\n", ft_strtrim(string, "+- "));
// 	return (0);
// }
