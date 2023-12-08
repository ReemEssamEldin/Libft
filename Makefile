# compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# source files
SRCS =  ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

# output library name
NAME = libft.a
HEADER = libft.h

# object files
OBJS = $(SRCS:.c=.o)

# build the library
all: $(NAME)

%.o: %.c
	cc -I $(HEADER) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Clean object files
clean:
	rm -rf $(OBJS)
	echo "$(OBJs) deleted"

# Clean object files and the library
fclean: clean
	rm -rf $(NAME)
	echo "$(NAME) deleted"

# Rebuild the library
re: fclean all

# Phony targets
.PHONY: all clean fclean re