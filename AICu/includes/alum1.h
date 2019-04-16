/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alum.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:23:54 by sgouifer          #+#    #+#             */
/*   Updated: 2019/03/03 21:53:30 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALUM1_H
# define ALUM1_H

# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"
# define KEEP_COLOR 1
# define R_C 0

# include <fcntl.h>
# include "get_next_line.h"

void	splash(void);
int		check_ac(int ac);

void	ft_putstr_c_v(char *str, char *c_name1, char *c_name2, char *code);
void	ft_putstr_c(char *str, char *colorname, int is_color_kept);
void	show_sticks(int sticks_number);
int		is_board_empty(int *board);
void	show_board(int *board, int lines_number);

void	play(int *board0, int line_numbers);
void	player_plays(int **board, int line_n, int sticks_n);
void	ai_plays(int **board, int line_n, int sticks_n);
int		is_valid_number(int n);
int		is_valid_sticks(int n, int *board, int line_numbers);

void	read_number(int *n, char *msg);
int		read_number2(int *n, char *msg);
int		copy_table_to_tab(int *tab1, int **tab2, int size);
int		*init_board1(int *line_numbers);

int		ft_strdig(char *ptr);
int		*ft_isvalidboard(int fd, int *ptr);
int		ft_getlines(int fd);
int		*getlent(char *name, int *lines_number);
int		*init_board2(char *av, int *lines_number);
int		is_looser(int nb);

void	player_plays_master(int **board, int i, int line_numbers);
int		ai_plays_master(int **board, int i, int line_numbers);
int		countantin(char *ptr);
void	ft_doublefree(char *line, int *ptr);
#endif
