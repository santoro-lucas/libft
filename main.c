#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <sys/cdefs.h>

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

void	test_strlcat(char *src, size_t size)
{
	char	array_ft[20];
	char	array_bsd[20];
	size_t	res_ft;
	size_t	res_bsd;

	bzero(array_ft, sizeof(array_ft));
	bzero(array_bsd, sizeof(array_bsd));
	memset(array_ft, '.', 5);
	memset(array_bsd, '.', 5);
	res_ft = ft_strlcat(array_ft, src, size);
	res_bsd = strlcat(array_bsd, src, size);
	if (res_ft != res_bsd)
		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
	printf("ft:  (%li)\t%s\n",res_ft, array_ft);
	printf("bsd: (%li)\t%s\n",res_bsd, array_bsd);
	if (res_ft != res_bsd)
		printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	else
		printf("-------------------------------------\n");
}

void test_strnstr(char *palheiro, char *agulha, size_t len)
{
	char *checkee1 = ft_strnstr(palheiro, agulha, len);
	char *checkee2 = strnstr(palheiro, agulha, len);
       
	if (checkee1 != checkee2)
		printf("============================================================= || ");
	printf("find %s in: %s with len = %li\t", agulha, palheiro, len);
	printf("ft: %s\t", checkee1);
	printf("bsd: %s\n", checkee2);
}

int	main(void)
{
	header("Testing isalpha");
	header("Testing isdigit");
	header("Testing isalnum");
	header("Testing isascii");
	header("Testing isprint");
	header("Testing strlen");
	header("Testing memset");
	header("Testing bzero");
	header("Testing memcpy");
	header("Testing memmove");
	header("Testing strlcpy");
	header("Testing strlcat");
	test_strlcat("abcdefghij", 16);
	test_strlcat("abcdefghij", 15);
	test_strlcat("abcdefghij", 14);
	test_strlcat("abcdefghij", 6);
	test_strlcat("abcdefghij", 5);
	test_strlcat("abcdefghij", 4);
	test_strlcat("abcdefghij", 0);
	header("Testing toupper");
	header("Testing tolower");
	header("Testing strchr");
	header("Testing strrchr");
	header("Testing strncmp");
	header("Testing memchr");
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
	test_strnstr("aaabcabcd", "aabc", -1);
	test_strnstr("aaabcabcd", "abcd", 9);
	test_strnstr("palavra", "ra", 7);
	test_strnstr("palavra", "", 20);
	test_strnstr("palavra", "pal", -6);
	test_strnstr("palavra", "ala", 8);
	test_strnstr("palavra", "lav", 7);
	test_strnstr("palavra", "avr", 6);
	test_strnstr("palavra", "vra", -6);
	test_strnstr("palavra", "vra", -7);
	test_strnstr("palavra", "vra", -200000);
	header("Testing atoi");
	header("Testing calloc");
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

