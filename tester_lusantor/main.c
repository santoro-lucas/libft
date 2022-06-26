#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <sys/cdefs.h>

/* Many thanks to freedesktop.org for the implementarion of strnstr */
/*char *strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}
*/
static void	underline(char *str, char underchar)
{
	int len;

	len = ft_strlen(str);
	while (len-- > 0)
		ft_putchar_fd(underchar, 1);
}

static void	header(char *str)
{
	ft_putendl_fd(str, 1);
	underline(str, '=');
	ft_putchar_fd('\n', 1);
}

static void test_memcmp(char um, char dois)
{
	int r_og;
	int r_ft;

	r_og = memcmp(&um, &dois, 1);
	r_ft = ft_memcmp(&um, &dois, 1);

	if ((r_ft > 0 && r_og < 0)
		|| (r_ft < 0 && r_og > 0))
		printf(">>\t");
	else
		printf("\t");
	printf("%d\t%d\t", um, dois);
	printf("memcmp: %d\tft_memcmp: %d", r_og, r_ft);
	if ((r_ft > 0 && r_og < 0)
		|| (r_ft < 0 && r_og > 0))
		printf("\t<<\n");
	else
		printf("\t\n");
}

// void	test_strnstr(void)
// {
// 	char a = 'A';
// 	a++;
// }

void	test_strlcat(char *src, size_t len)
{
	size_t	dst_size = 30;
	size_t total;
	char dest[dst_size];
	
	ft_bzero(dest, dst_size);
	ft_memset(dest, '0', 5);
	total = ft_strlcat(dest, src, len);
	printf("%s: return %li\n", dest, total);
}

void test_strnstr(char *palheiro, char *agulha, size_t len)
{
	char *checkee1 = ft_strnstr(palheiro, agulha, len);
	char *checkee2 = strnstr(palheiro, agulha, len);
	printf("searching %s in: %s with len = %li",agulha, palheiro, len);
	printf("ft: %s\t", checkee1);
	printf("bsd: %s", checkee2);
	if (checkee1 != checkee2)
		printf("\t\t\t!!!\n\n");
	else
		printf("\n\n");
}

int	main(void)
{
	header("Testing isalpha");
		ft_putnbr_fd(ft_isalpha('a'), 1);
		ft_putchar_fd('\n', 1);
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
	header("Testing strlcat");
	test_strlcat("11111", 7);
	test_strlcat("11111", 10);
	test_strlcat("11111", 11);
	test_strlcat("1111111111", 20);
	test_strlcat("1111111111", 21);
	test_strlcat("1111111111", 22);
	test_strlcat("8888", 4);
	test_strlcat("8888", 0);
	ft_putendl_fd("", 1);
	// ft_bzero(recebe, 31);
	// ft_memset(recebe, 'A', 10);
	// ft_putendl_fd(recebe, 1);
	// ft_putnbr_fd(ft_strlcat(recebe, "TUM", 3), 1);
	// ft_putchar_fd('\n', 1);
	// ft_putendl_fd(recebe, 1);
	// header("Testing toupper");
	// header("Testing tolower");
	// header("Testing strchr");
	// char test_strchr[10] = "AAAABAABA";
	// ft_putendl_fd(test_strchr, 1);
	// ft_putendl_fd(ft_strchr(test_strchr, 'C'), 1);
	// header("Testing strrchr");
	// header("Testing strncmp");
	// header("Testing memchr");
	header("Testing memcmp");
	test_memcmp(0, 0);
	test_memcmp(0, 1);
	test_memcmp(0, -1);
	test_memcmp(0, 128);
	test_memcmp(1, 0);
	test_memcmp(-1, 0);
	test_memcmp(-128, 0);
	test_memcmp(255, 0);
	header("Testing strnstr");
	test_strnstr("qualquer coisa", "", 20);
	test_strnstr("palavreado", "lav", -6);
	test_strnstr("palavreado", "ead", 12);
	test_strnstr("palavreado", "eado", 10);
	test_strnstr("palavreado", "d", 10);
	test_strnstr("palavreado", "pal", 8);
	test_strnstr("palavreado", "ead", 8);
	test_strnstr("palavreado", "par", 5);
	test_strnstr("palavreado", "pal", 4);
	test_strnstr("palavreado", "pal", 3);
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
