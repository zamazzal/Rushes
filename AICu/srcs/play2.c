/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:24:07 by sgouifer          #+#    #+#             */
/*   Updated: 2019/03/03 21:51:13 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void	player_plays(int **board, int line_n, int sticks_n)
{
	ft_putstr_c("\n\t* Player played *\n", "green", R_C);
	if ((*board)[line_n - 1] >= sticks_n)
		(*board)[line_n - 1] = (*board)[line_n - 1] - sticks_n;
	if ((*board)[0] == 0)
		ft_putstr_c("\n\t* AI wins *\n\n", "red", R_C);
}

void	ai_plays(int **board, int line_n, int sticks_n)
{
	char *ptr;

	ft_putstr_c("\n\t* AI playes :", "green", KEEP_COLOR);
	if ((*board)[line_n - 1] >= sticks_n)
		(*board)[line_n - 1] = (*board)[line_n - 1] - sticks_n;
	ft_putstr_c(" AI took ", "green", R_C);
	ptr = ft_itoa(sticks_n);
	ft_putstr_c(ptr, "green", R_C);
	free(ptr);
	ft_putstr_c(" Matches *\n", "green", R_C);
	if ((*board)[0] == 0)
		ft_putstr_c("\n\t* Player wins *\n\n", "cyan", R_C);
}

int		is_valid_number(int n)
{
	return ((n >= 1 && n <= 10000));
}

int		is_valid_sticks(int n, int *board, int line_numbers)
{
	int i;
	int last_val;

	last_val = 0;
	i = 0;
	while (board[i] && i + 1 <= line_numbers)
	{
		last_val = board[i];
		i++;
	}
	return ((n >= 1 && n <= 3 && n <= last_val));
}

int		countantin(char *ptr)
{
	int		i;
	int		x;

	x = 0;
	i = 0;
	while (ptr[i] != '\0')
		if (ptr[i++] == '\n')
			x++;
	return (x);
}
