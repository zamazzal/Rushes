/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:24:07 by sgouifer          #+#    #+#             */
/*   Updated: 2019/03/03 21:54:41 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void	ft_putstr_c_v(char *str, char *c_name1, char *c_name2, char *code)
{
	if (ft_strcmp(c_name1, c_name2) == 0)
	{
		ft_putstr(code);
		ft_putstr(str);
	}
}

void	ft_putstr_c(char *str, char *colorname, int is_color_kept)
{
	ft_putstr_c_v(str, colorname, "red", KRED);
	ft_putstr_c_v(str, colorname, "green", KGRN);
	ft_putstr_c_v(str, colorname, "yellow", KYEL);
	ft_putstr_c_v(str, colorname, "blue", KBLU);
	ft_putstr_c_v(str, colorname, "magenta", KMAG);
	ft_putstr_c_v(str, colorname, "cyan", KCYN);
	if (!is_color_kept)
		ft_putstr(KNRM);
}

void	show_sticks(int sticks_number)
{
	int i;

	i = 0;
	ft_putstr_c("\t", "green", KEEP_COLOR);
	while (i < sticks_number)
	{
		ft_putchar('|');
		if (i < sticks_number + 1)
			ft_putchar(' ');
		i++;
	}
	ft_putstr_c("", "green", R_C);
}

int		is_board_empty(int *board)
{
	return (board[0] == 0);
}

void	show_board(int *board, int lines_number)
{
	int i;

	i = 0;
	if (is_board_empty(board))
		return ;
	ft_putstr("\n");
	while (i < lines_number)
	{
		show_sticks(board[i]);
		ft_putstr("\n");
		i++;
	}
}
