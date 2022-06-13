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

memmove:

strlcat:

strlcpy:

tolower:

toupper:

strchr:

strrchr:

strncmp:

memchr:

memcmp:

strnstr:

atoi:

calloc:

strdup:

substr:

strjoin:

strtrim:

split:

strmapi:

itoa:

striteri:

putchar_fd:

putstr_fd:

putendl_fd:

putnbr_fd:

