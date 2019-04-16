# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/02 20:24:07 by sgouifer          #+#    #+#              #
#    Updated: 2019/03/03 21:56:18 by zamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = alum1

SRC_PATH = srcs/
SRC = board.c \
		board2.c \
		main.c \
		play.c \
		play2.c \
		show.c \

GNL = tools/get_next_line.c
SRCS = $(addprefix $(SRC_PATH), $(SRC))
OBJ = $(SRC:.c=.o)
LIBFT = -L tools/libft/ -lft

INCLUDES = -I includes -I tools/ -I tools/libft/includes

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	@echo "compiling : done"
	@make -C tools/libft
	@gcc $(FLAG) -c $(SRCS) $(INCLUDES)
	@gcc $(FLAG) $(INCLUDES) $(OBJ) $(LIBFT) $(GNL) -o $(NAME)

clean:
	@echo "clean : done"
	@make -C tools/libft/ clean
	@rm -rf $(OBJ)

fclean: clean
	@echo "fclean : done"
	@make -C tools/libft/ fclean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all, clean, fclean, re
