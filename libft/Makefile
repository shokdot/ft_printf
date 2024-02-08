NAME = libft.a
SRC = $(wildcard *.c)
HEADER = $(wildcard *.h)
OBJS = $(SRC:.c=.o)
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:fclean all

.PHONY: all clean fclean re
