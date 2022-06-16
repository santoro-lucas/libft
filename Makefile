CC=cc
CFLAGS=-Wall -Wextra -Werror

SRCS =	isalpha isdigit isalnum isascii isprint strlen \
		memset bzero memcpy memmove strlcpy strlcat \
		toupper tolower strchr strrchr strncmp memchr \
		memcmp strnstr atoi calloc strdup substr strjoin \
		strtrim split itoa strmapi striteri putchar_fd \
		putstr_fd putendl_fd putnbr_fd

libft: libft.h
	ar -rcs libft.a ft_*.o && rm *.o

clean:
	rm ft_*.o

$(SRCS):
	$(CC) $(CFLAGS) -c ft_$@.c
	ls ft_$@.o
