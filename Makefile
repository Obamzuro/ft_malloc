NAME = malloc

FLAGS = -g# -Wall -Wextra -Werror

SRC = main.c

OBJ = $(SRC:.c=.o)

HDIR = ft_printf/include	\
       libft/include

LIBS = ft_printf/libftprintf.a	\
       libft/libft.a

all: lib $(NAME)

$(NAME): $(OBJ) $(LIBS)
	gcc $(FLAGS) $(addprefix -I, $(HDIR)) $(OBJ) -L libft -lft -L ft_printf -lftprintf -o $(NAME)

%.o: %.c
	gcc $(FLAGS) $(addprefix -I, $(HDIR)) -c $< -o $@

lib:
	make -C libft
	make -C ft_printf

clean:
	make -C libft clean
	make -C ft_printf clean
	find . -name "*.o" -o -name ".*.sw[pon]" -exec rm -rf {} \;
	rm -rf $(OBJ)

fclean: clean
	make -C libft fclean
	make -C ft_printf fclean
	rm -rf $(NAME)

re: fclean all
