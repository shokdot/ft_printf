NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utils.c
HEADER = $(wildcard *.h)
OBJ = $(SRC:.c=.o)
AR = ar rc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):$(OBJ) $(HEADER)
	make -C ./libft
	cp ./libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	make clean -C ./libft/

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./libft/

test: all
	cc main.c $(NAME)

re: fclean all

.PHONY: all clean fclean re
