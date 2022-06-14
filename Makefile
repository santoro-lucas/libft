all:
	cc -Wall -Wextra -Werror main.c libft.a
libft:
	ar -rcs libft.a ft_*.o

isalpha:
	cc -Wall -Wextra -Werror -c ft_isalpha.c

isdigit:
	cc -Wall -Wextra -Werror -c ft_isdigit.c

isalnum:
	cc -Wall -Wextra -Werror -c ft_isprint.c

isascii:
	cc -Wall -Wextra -Werror -c ft_islinum.c

isprint:
	cc -Wall -Wextra -Werror -c ft_isprint.c

strlen:
	cc -Wall -Wextra -Werror -c ft_isstrlen.c

memset:
	cc -Wall -Wextra -Werror -c ft_ismemset.c

bzero:
	cc -Wall -Wextra -Werror -c ft_bzero.c

memcpy:
	cc -Wall -Wextra -Werror -c ft_memcpy.c

memmove:
	cc -Wall -Wextra -Werror -c ft_memmove.c

strlcat:
	cc -Wall -Wextra -Werror -c ft_strlcat.c

strlcpy:
	cc -Wall -Wextra -Werror -c ft_strlcpy.c

tolower:
	cc -Wall -Wextra -Werror -c ft_tolower.c

toupper:
	cc -Wall -Wextra -Werror -c ft_toupper.c

strchr:
	cc -Wall -Wextra -Werror -c ft_strchr.c

strrchr:
	cc -Wall -Wextra -Werror -c ft_strrchr.c

strncmp:
	cc -Wall -Wextra -Werror -c ft_strncmp.c

memchr:
	cc -Wall -Wextra -Werror -c ft_memchr.c

memcmp:
	cc -Wall -Wextra -Werror -c ft_memcmp.c

strnstr:
	cc -Wall -Wextra -Werror -c ft_strnstr.c

atoi:
	cc -Wall -Wextra -Werror -c ft_atoi.c

calloc:
	cc -Wall -Wextra -Werror -c ft_calloc.c

strdup:
	cc -Wall -Wextra -Werror -c ft_strdup.c

substr:
	cc -Wall -Wextra -Werror -c ft_substr.c

strjoin:
	cc -Wall -Wextra -Werror -c ft_strjoin.c

strtrim:
	cc -Wall -Wextra -Werror -c ft_strtrim.c

split:
	cc -Wall -Wextra -Werror -c ft_split.c

strmapi:
	cc -Wall -Wextra -Werror -c ft_strmapi.c

itoa:
	cc -Wall -Wextra -Werror -c ft_itoa.c

striteri:
	cc -Wall -Wextra -Werror -c ft_itoa.c

putchar_fd:
	cc -Wall -Wextra -Werror -c ft_putchar_fd.c

putstr_fd:
	cc -Wall -Wextra -Werror -c ft_putstr_fd.c

putendl_fd:
	cc -Wall -Wextra -Werror -c ft_putendl_fd.c

putnbr_fd:
	cc -Wall -Wextra -Werror -c ft_putnbr_fd.c
