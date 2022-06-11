#include "libft.h"

static void	linebreak(void)
{
	ft_putchar_fd('\n', 1);
}

static void	underline(char *str)
{
	int len;

	len = ft_strlen(str);
	while (len-- > 0)
		ft_putchar_fd('=', 1);
	linebreak();
}

static void	header(char *str)
{
	ft_putendl_fd(str, 1);
	underline(str);
	linebreak();
}

int	main(void)
{
	// char string[8] = {'p', 'a', 'l', 'a', 'v', 'r', 'a', '\0'};

	header("Testing isalpha");
	header("Testing isdigit");
	header("Testing isalnum");
	header("Testing isascii");
	header("Testing isprint");
	header("Testing strlen");
	header("Testing memset");
	header("Testing bzero");
	header("Testing memcpy");
	// header("Testing memmove");
	// header("Testing strlcpy");
	// header("Testing strlcat");
	header("Testing toupper");
	header("Testing tolower");
	// header("Testing strchr");
	// header("Testing strrchr");
	// header("Testing strncmp");
	// header("Testing memchr");
	// header("Testing memcmp");
	// header("Testing strnstr");
	// header("Testing atoi");

	// header("Testing calloc");
	header("Testing strdup");

	header("Testing substr");
	header("Testing strjoin");
	header("Testing strtrim");
	header("Testing split");
	header("Testing strmapi");
	header("Testing itoa");
	header("Testing striteri");
	header("Testing putchar_fd");
	header("Testing putstr_fd");
	header("Testing putendl_fd");
	header("Testing putnbr_fd");
	return (0);
}

