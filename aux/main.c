#include "libft.h"

static void	underline(char *str)
{
	int len;

	len = ft_strlen(str);
	while (len-- > 0)
		ft_putchar_fd('=', 1);
}

static void	header(char *str)
{
	ft_putendl_fd(str, 1);
	underline(str);
	ft_putchar_fd('\n', 1);
}	

int	main(void)
{
	// header("Testing isalpha");
	// 	ft_putnbr_fd(ft_isalpha('a'), 1);
	// 	ft_putchar_fd('\n', 1);
	// header("Testing isdigit");
	// header("Testing isalnum");
	// header("Testing isascii");
	// header("Testing isprint");
	// header("Testing strlen");
	// header("Testing memset");
	// header("Testing bzero");
	// header("Testing memcpy");
	// header("Testing memmove");
	// header("Testing strlcpy");
	// header("Testing strlcat");
	// char recebe[31];
	// ft_bzero(recebe, 31);
	// ft_memset(recebe, 'A', 10);
	// ft_putendl_fd(recebe, 1);
	// ft_putnbr_fd(ft_strlcat(recebe, "TUM", 3), 1);
	// ft_putchar_fd('\n', 1);
	// ft_putendl_fd(recebe, 1);
	// header("Testing toupper");
	// header("Testing tolower");
	header("Testing strchr");
	char test_strchr[10] = "AAAABAABA";
	ft_putendl_fd(test_strchr, 1);
	ft_putendl_fd(ft_strchr(test_strchr, 'C'), 1);
	// header("Testing strrchr");
	// header("Testing strncmp");
	// header("Testing memchr");
	// header("Testing memcmp");
	// header("Testing strnstr");
	// header("Testing atoi");
	// header("Testing calloc");
	// header("Testing strdup");
	// header("Testing substr");
	// header("Testing strjoin");
	// header("Testing strtrim");
	// header("Testing split");
	// header("Testing strmapi");
	// header("Testing itoa");
	// header("Testing striteri");
	// header("Testing putchar_fd");
	// header("Testing putstr_fd");
	// header("Testing putendl_fd");
	// header("Testing putnbr_fd");
	return (0);
}

