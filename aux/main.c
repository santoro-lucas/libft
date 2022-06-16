#include "libft.h"

static void	underline(char *str)
{
	int len;

	len = ft_strlen(str);
	while (len-- > 0)
		ft_putchar_fd('=', 1);
}

static void	wrapper(char *str)
{
	ft_putendl_fd(str, 1);
	underline(str);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	wrapper("Testing isalpha");
		ft_putnbr_fd(ft_isalpha('a'), 1);
		ft_putchar_fd('\n', 1);
	wrapper("Testing isdigit");
	wrapper("Testing isalnum");
	wrapper("Testing isascii");
	wrapper("Testing isprint");
	wrapper("Testing strlen");
	wrapper("Testing memset");
	wrapper("Testing bzero");
	wrapper("Testing memcpy");
	// wrapper("Testing memmove");
	// wrapper("Testing strlcpy");
	// wrapper("Testing strlcat");
	wrapper("Testing toupper");
	wrapper("Testing tolower");
	// wrapper("Testing strchr");
	// wrapper("Testing strrchr");
	// wrapper("Testing strncmp");
	// wrapper("Testing memchr");
	// wrapper("Testing memcmp");
	// wrapper("Testing strnstr");
	// wrapper("Testing atoi");

	// wrapper("Testing calloc");
	wrapper("Testing strdup");

	wrapper("Testing substr");
	wrapper("Testing strjoin");
	wrapper("Testing strtrim");
	wrapper("Testing split");
	wrapper("Testing strmapi");
	wrapper("Testing itoa");
	wrapper("Testing striteri");
	wrapper("Testing putchar_fd");
	wrapper("Testing putstr_fd");
	wrapper("Testing putendl_fd");
	wrapper("Testing putnbr_fd");
	return (0);
}

