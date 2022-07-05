#include "libft.h"
#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>
#include <sys/cdefs.h>

// static void	underline(char *str, char underchar)
// {
// 	int len;

// 	len = ft_strlen(str);
// 	while (len-- > 0)
// 		ft_putchar_fd(underchar, 1);
// }
// //
// static void	header(char *str)
// {
// 	ft_putendl_fd(str, 1);
// 	underline(str, '=');
// 	ft_putchar_fd('\n', 1);
// }
//void test_memcmp(char um, char dois)
//{
//	int r_og;
//	int r_ft;
//
//	r_og = memcmp(&um, &dois, 1);
//	r_ft = ft_memcmp(&um, &dois, 1);
//
//	if ((r_ft > 0 && r_og < 0)
//		|| (r_ft < 0 && r_og > 0))
//		printf(">>\t");
//	else
//		printf("\t");
//	printf("%d\t%d\t", um, dois);
//	printf("memcmp: %d\tft_memcmp: %d", r_og, r_ft);
//	if ((r_ft > 0 && r_og < 0)
//		|| (r_ft < 0 && r_og > 0))
//		printf("\t<<\n");
//	else
//		printf("\t\n");
//}
//
//void	test_strlcat(char *src, size_t size)
//{
//	char	array_ft[20];
//	char	array_bsd[20];
//	size_t	res_ft;
//	size_t	res_bsd;
//
//	bzero(array_ft, sizeof(array_ft));
//	bzero(array_bsd, sizeof(array_bsd));
//	memset(array_ft, '.', 5);
//	memset(array_bsd, '.', 5);
//	res_ft = ft_strlcat(array_ft, src, size);
//	res_bsd = strlcat(array_bsd, src, size);
//	if (res_ft != res_bsd)
//		printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
//	printf("ft:  (%li)\t%s\n",res_ft, array_ft);
//	printf("bsd: (%li)\t%s\n",res_bsd, array_bsd);
//	if (res_ft != res_bsd)
//		printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
//	else
//		printf("-------------------------------------\n");
//}
//
//void test_strnstr(char *palheiro, char *agulha, size_t len)
//{
//	char *checkee1 = ft_strnstr(palheiro, agulha, len);
//	char *checkee2 = strnstr(palheiro, agulha, len);
//
//	if (checkee1 != checkee2)
//		printf("============================================================= || ");
//	printf("find %s in: %s with len = %li\t", agulha, palheiro, len);
//	printf("ft: %s\t", checkee1);
//	printf("bsd: %s\n", checkee2);
//}
//
//void	test_atoi(char *nbr)
//{
//	int	result_atoi;
//	int	result_ft_atoi;
//
//	result_atoi = atoi(nbr);
//	result_ft_atoi = ft_atoi(nbr);
//	printf("og %i\t| ft %i",//
//		result_atoi, result_ft_atoi);
//	if (result_atoi != result_ft_atoi)
//		printf("\tXXXXXXXXXXX");
//	printf("\n");
//}
//
//	void	test_calloc(size_t nmemb, size_t size)
//	{
//		void	*libc_ptr;
//		void	*ft_ptr;
//
//		libc_ptr = calloc(nmemb, size);
//		ft_ptr = ft_calloc(nmemb, size);
//		printf("%li members, %li size:\t", nmemb, size);
//		if (ft_memcmp(libc_ptr, ft_ptr, size) == 0)
//			printf("OK\n");
//		else
//			printf("KO\t<<<<<<\n");
//	}
//	void	test_substr(const char *s, unsigned int start, size_t len)
//	{
//		char *str;
//	
//		str = ft_substr(s, start, len);
//		printf("string: %s\nsub:%s\n\n", s, str);
//		free(str);
//	}
//
//	void	test_putnbr_fd(int nbr)
//	{
//		ft_putnbr_fd(nbr, 1);
//		ft_putchar_fd('\n', 1);
//	}
//
//	void	test_itoa(int nbr)
//	{
//		char *result_itoa;
//	
//		result_itoa = ft_itoa(nbr);
//		printf("%i\t%s\n", nbr, result_itoa);
//	}
//
void	test_split(char *string, char delimiter)
{
	char	**coiso;
	size_t	ntimes;

	ntimes = 0;
	coiso = ft_split(string, delimiter);
	printf("%s:\n=======\n", string);
	while (coiso[ntimes])
	{
		printf("%li. \\%s\\\n", ntimes, coiso[ntimes]);
		ntimes++;
	}
	printf("\n");
	free(*coiso);
	free(coiso);
}

int	main(void)
{
//	header("Testing isalpha");
//	header("Testing isdigit");
//	header("Testing isalnum");
//	header("Testing isascii");
//	header("Testing isprint");
//	header("Testing strlen");
//	header("Testing memset");
//	header("Testing bzero");
//	header("Testing memcpy");
//	header("Testing memmove");
//	header("Testing strlcpy");
//	header("Testing strlcat");
//	test_strlcat("abcdefghij", 16);
//	test_strlcat("abcdefghij", 15);
//	test_strlcat("abcdefghij", 14);
//	test_strlcat("abcdefghij", 6);
//	test_strlcat("abcdefghij", 5);
//	test_strlcat("abcdefghij", 4);
//	test_strlcat("abcdefghij", 0);
//	header("Testing toupper");
//	header("Testing tolower");
//	header("Testing strchr");
//	header("Testing strrchr");
//	header("Testing strncmp");
//	header("Testing memchr");
//	header("Testing memcmp");
//	test_memcmp(0, 0);
//	test_memcmp(0, 1);
//	test_memcmp(0, -1);
//	test_memcmp(0, 128);
//	test_memcmp(1, 0);
//	test_memcmp(-1, 0);
//	test_memcmp(-128, 0);
//	test_memcmp(255, 0);
//	header("Testing strnstr");
//	test_strnstr("aaabcabcd", "aabc", -1);
//	test_strnstr("aaabcabcd", "abcd", 9);
//	test_strnstr("palavra", "ra", 7);
//	test_strnstr("palavra", "", 20);
//	test_strnstr("palavra", "pal", -6);
//	test_strnstr("palavra", "ala", 8);
//	test_strnstr("palavra", "lav", 7);
//	test_strnstr("palavra", "avr", 6);
//	test_strnstr("palavra", "vra", -6);
//	test_strnstr("palavra", "vra", -7);
//	test_strnstr("palavra", "vra", -200000);
//	header("Testing atoi");
//	test_atoi(" 123");
//	test_atoi("\t123");
//	test_atoi("\n123");
//	test_atoi("\v123");
//	test_atoi("\f123");
//	test_atoi("\r123");
//	test_atoi("\t \v123");
//	test_atoi("\f\r 123");
//	test_atoi("\r\t\n123");
//	test_atoi("a123");
//	test_atoi("1s3");
//	test_atoi("+223");
//	test_atoi("-123");
//	test_atoi("-123tu");
//	test_atoi("++123");
//	test_atoi("--123");
//	test_atoi("+-123");
//	test_atoi("0");
//	test_atoi("00001");
//	test_atoi("2147483647");
//	test_atoi("-2147483648");
//	header("Testing calloc");
//	test_calloc(1, 1);
//	test_calloc(10, 1);
//	test_calloc(100, 4);
//	test_calloc(200, sizeof(long));
//	test_calloc(0, 300);
//	test_calloc(50, sizeof(int));
//	header("Testing strdup");
//	header("Testing substr");
//	test_substr("Running up that hill", 8, 13);
//	test_substr("Running up that hill", 0, 11);
//	test_substr("Running up that hill", 16, 4);
//	test_substr("Running up that hill", 16, 12);
//	test_substr("Running up that hill", 1, 1);
//	test_substr("Running up that hill", 8, 77);
//	test_substr("Running up that hill", 8, 0);
//	header("Testing strjoin");
//	header("Testing strtrim");
// header("Testing split");
	test_split("Essa aqui e uma frase pra separar", ' ');
	test_split("     Esta    impossivel    tankar o bostil  ", ' ');
	test_split("bananada", ' ');
	test_split(" bananada ", ' ');
	test_split("        ", ' ');
//	header("Testing strmapi");
//	header("Testing itoa");
//	test_itoa(0);
//	test_itoa(12345);
//	test_itoa(-12345);
//	test_itoa(+12345);
//	test_itoa(-12345);
//	test_itoa(0);
//	test_itoa(+00000);
//	test_itoa(-42);
//	test_itoa(+42);
//	test_itoa(-3 * 4);
//	header("Testing striteri");
//	header("Testing putchar_fd");
//	header("Testing putstr_fd");
//	header("Testing putendl_fd");
//	header("Testing putnbr_fd");
//	test_putnbr_fd(42);
//	test_putnbr_fd(-42);	
//	test_putnbr_fd(0);
//	test_putnbr_fd(1);
//	test_putnbr_fd(-1);
//	test_putnbr_fd(5555);
//	test_putnbr_fd(2147483647);
//	test_putnbr_fd(-2147483648);
//	test_putnbr_fd(2147483648);
//	test_putnbr_fd(30000);
//	test_putnbr_fd(00000);
//	test_putnbr_fd(-100000);
//	test_putnbr_fd(+100000);
//	return (0);
}
