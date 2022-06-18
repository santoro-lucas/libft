NAME=libft.a
CFLAGS=-Wall -Wextra -Werror

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o) 

all: $(NAME) 

$(NAME): libft.h $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rcs libft.a $(OBJS)

re: fclean all

clean:
	$(RM) $(OBJS)

fclean: clean
	rm $(NAME)
