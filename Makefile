# compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# source files
SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

# object files
OBJS = $(SRCS:.c=.o)

# output library name
NAME = libft.a

# build the library
all: $(NAME)

$(NAME):$(OBJS)
    ar rcs $(NAME):$(OBJS)

# Clean object files
clean:
	rm -f $(OBJS)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild the library
re: fclean all

# Phony targets
.PHONY: all clean fclean re