FLAGS			=	-Wall -Wextra -Werror
ADDITIONAL_FLAGS	=	-lbsd
PATH_PREFIX		=	../
LIBFT			=	$(PATH_PREFIX)libft.a
MAIN			=	main.c
SOURCES			=	ft_isalpha.c \
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
				ft_srlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrcht.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				
OBJECTS			=	$(SOURCES:.c=.o)

all:
	$(CC) $(FLAGS) $(ADDITIONAL_FLAGS) $(LIBFT) $(MAIN)

$(LIBFT):
	ar -rcs $(LIBFT) $(OBJECTS)

clean:
	rm $(OBJECTS)
