CC = gcc
RM = rm -rf
NAME = push_swap.a
CFLAGS = -Wall -Wextra -Werror
libft.a = libft/libft.a
SRCS = push_swap.c allocates.c checks.c commands.c commands2.c commands3.c sort.c binary.c utils.c utils_2.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	cd libft && $(MAKE)
	$(CC) $(CFLAGS) $(libft.a) $(NAME) -o push_swap

clean:
	cd libft && $(MAKE) clean
	$(RM) $(OBJS)

fclean: clean
	cd libft && $(MAKE) fclean
	$(RM) $(NAME) push_swap

re: fclean all

.PHONY: clean fclean all re