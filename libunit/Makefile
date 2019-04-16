# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/02 19:42:44 by zamazzal          #+#    #+#              #
#    Updated: 2018/12/02 23:04:43 by zamazzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PATH_LIBFT = ./your_tests/notgood_test

NAME = libunit.a

NAME_TEST = test_exec

PATH_FRAMEWORK = framework

_SRC = clean_test.c launch.c load_test.c print_endl.c print_nbr.c print_str.c

SRC = $(patsubst %.c, $(PATH_FRAMEWORK)/%.c, $(_SRC))

TESTS = tests/ft_atoi/00_launcher.c tests/ft_atoi/01_basic_test_00.c tests/ft_atoi/02_basic_test_01.c tests/ft_atoi/03_basic_test_02.c tests/ft_atoi/04_basic_test_03.c tests/ft_atoi/05_basic_test_04.c tests/ft_atoi/06_basic_test_05.c tests/ft_atoi/07_basic_test_06.c tests/ft_atoi/08_basic_test_07.c tests/ft_atoi/09_basic_test_08.c tests/ft_atoi/10_basic_test_09.c tests/ft_atoi/11_basic_test_10.c tests/ft_atoi/12_basic_test_11.c tests/ft_atoi/13_basic_test_12.c tests/ft_atoi/14_basic_test_13.c tests/ft_atoi/15_basic_test_14.c tests/ft_atoi/16_basic_test_15.c tests/ft_isalnum/00_launcher.c tests/ft_isalnum/01_basic_test.c tests/ft_isalpha/00_launcher.c tests/ft_isalpha/01_basic_test.c tests/ft_isascii/00_launcher.c tests/ft_isascii/01_basic_test.c tests/ft_isdigit/00_launcher.c tests/ft_isdigit/01_basic_test.c tests/ft_isprint/00_launcher.c tests/ft_isprint/01_basic_test.c tests/ft_strchr/00_launcher.c tests/ft_strchr/01_basic_test_1.c tests/ft_strchr/02_basic_test_2.c tests/ft_strchr/03_basic_test_3.c tests/ft_strchr/04_basic_test_4.c tests/ft_strchr/05_null_test.c tests/ft_strdup/00_launcher.c tests/ft_strdup/01_basic_test_1.c tests/ft_strdup/02_basic_test_2.c tests/ft_strdup/03_basic_test_3.c tests/ft_strdup/04_hard_test_4.c tests/ft_strdup/05_null_test.c tests/ft_strlen/00_launcher.c tests/ft_strlen/01_basic_test_1.c tests/ft_strlen/02_basic_test_2.c tests/ft_strlen/03_basic_test_3.c tests/ft_strlen/04_null_test.c tests/ft_strlen/05_bigger_str_test.c tests/ft_strncat/00_launcher.c tests/ft_strncat/01_basic_test_1.c tests/ft_strncat/02_basic_test_2.c tests/ft_strncat/03_basic_test_3.c tests/ft_strncat/04_basic_test_4.c tests/ft_strncat/05_hard_test_1.c tests/ft_strncat/06_null_test_1.c tests/ft_strncmp/00_launcher.c tests/ft_strncmp/01_basic_test_1.c tests/ft_strncmp/02_basic_test_2.c tests/ft_strncmp/03_basic_test_3.c tests/ft_strncmp/04_basic_test_4.c tests/ft_strncmp/05_hard_test_1.c tests/ft_strncmp/06_null_test_1.c tests/ft_strncmp/07_null_test_2.c tests/ft_strncmp/08_null_test_3.c tests/ft_strncpy/00_launcher.c tests/ft_strncpy/01_basic_test_1.c tests/ft_strncpy/02_basic_test_2.c tests/ft_strncpy/03_basic_test_3.c tests/ft_strncpy/04_basic_test_4.c tests/ft_strncpy/05_null_test.c tests/ft_strnstr/00_launcher.c tests/ft_strnstr/01_basic_test_1.c tests/ft_strnstr/02_basic_test_2.c tests/ft_strnstr/03_basic_test_3.c tests/ft_strnstr/04_basic_test_4.c tests/ft_strnstr/05_null_test.c tests/ft_strrchr/00_launcher.c tests/ft_strrchr/01_basic_test_1.c tests/ft_strrchr/02_basic_test_2.c tests/ft_strrchr/03_basic_test_3.c tests/ft_strrchr/04_basic_test_4.c tests/ft_strrchr/05_null_test.c tests/ft_strstr/00_launcher.c tests/ft_strstr/01_basic_test_1.c tests/ft_strstr/02_basic_test_2.c tests/ft_strstr/03_basic_test_3.c tests/ft_strstr/04_null_test_1.c tests/ft_strstr/05_null_test_2.c tests/ft_strstr/06_null_test_3.c tests/ft_tolower/00_launcher.c tests/ft_tolower/01_basic_test.c tests/ft_tolower/02_null_test.c tests/ft_toupper/00_launcher.c tests/ft_toupper/01_basic_test.c tests/ft_toupper/02_null_test.c tests/main.c

REAL_TESTS = real_tests/f_test.c real_tests/f_test2.c real_tests/f_test3.c real_tests/f_test4.c real_tests/f_test5.c

OBJ_TESTS = $(patsubst %.c, %.o, $(notdir $(TESTS)))

OBJ_REAL_TESTS = $(patsubst %.c, %.o, $(notdir $(REAL_TESTS)))

OBJ = $(patsubst %.c, %.o, $(_SRC))

FLAG = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME) : $(PATH_FRAMEWORK)/libunit.h
	gcc $(FLAG) -c $(SRC) -I $(PATH_FRAMEWORK) -I $(PATH_LIBFT)/includes -I $(PATH_LIBFT) -I tests
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

test: re
	make -C $(PATH_LIBFT) re
	gcc $(TESTS) $(REAL_TESTS) -I $(PATH_FRAMEWORK) -I $(PATH_LIBFT)/includes -I $(PATH_LIBFT) -I tests -o $(NAME_TEST) -L $(PATH_LIBFT) -lft -L . -lunit
	exec ./$(NAME_TEST)
	exec ./$(NAME_TEST) > correction.log

clean:
	make -C $(PATH_LIBFT) clean
	rm -f correction.log
	rm -Rf $(OBJ)
	rm -Rf $(OBJ_TESTS)
	rm -Rf $(OBJ_REAL_TESTS)

fclean: clean
	make -C $(PATH_LIBFT) fclean
	rm -Rf $(NAME)
	rm -Rf $(NAME_TEST)

re: fclean all
