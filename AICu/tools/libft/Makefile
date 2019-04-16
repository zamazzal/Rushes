# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamazzal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/06 19:38:09 by zamazzal          #+#    #+#              #
#    Updated: 2019/03/03 18:57:38 by zamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c \
		ft_isdigit.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_nbrlen.c \
		ft_putchar.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strsub.c \

OBJS = $(FILES:.c=.o)

all : $(NAME)

$(NAME) :
	@gcc -Wall -Wextra -Werror -I includes -c $(FILES)
	@ar rc $(NAME) $(OBJS)

clean :
	@/bin/rm -rf $(OBJS)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
