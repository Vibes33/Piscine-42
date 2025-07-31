CC= cc
CFLAGS= -Wall -Wextra -Werror
SRC= srcs/error_utils.c srcs/main.c srcs/free.c srcs/ft_split.c srcs/utils.c srcs/validity_check_utils.c srcs/solver.c srcs/solver_utils.c srcs/stdin.c srcs/validity_checker.c
INC= includes
OBJ= $(SRC:.c=.o)
NAME=bsq

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -g -c -o $@ $^

.PHONY: all, clean, fclean, re