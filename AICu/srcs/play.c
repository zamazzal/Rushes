/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:24:07 by sgouifer          #+#    #+#             */
/*   Updated: 2019/03/03 21:28:07 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void	show_matches(int matches_count)
{
	char *ptr;

	ptr = ft_itoa(matches_count);
	ft_putstr_c("\tMatches left on last line: ", "yellow", R_C);
	ft_putstr_c(ptr, "green", R_C);
	ft_putstr("\n");
	free(ptr);
}

void	player_plays_master(int **board, int i, int line_numbers)
{
	int		matches_typed;
	char	data[1024];

	matches_typed = -1;
	while (!is_valid_sticks(matches_typed, *board, line_numbers - i))
	{
		ft_putstr_c("\n ➜ Your turn: Type number of", "cyan", R_C);
		ft_putstr_c(" matches to remove (1 to 3):\n", "cyan", R_C);
		read(0, data, 128);
		matches_typed = ft_atoi(data);
	}
	player_plays(board, line_numbers - i, matches_typed);
}

int		ai_plays_master(int **board, int i, int line_numbers)
{
	int		ai_sticks;

	ai_sticks = 1;
	while (!is_looser((*board)[line_numbers - i - 1] - ai_sticks) &&
		ai_sticks <= 2)
		ai_sticks++;
	if (ai_sticks == 3 && is_looser((*board)[line_numbers - i - 1] -
		ai_sticks) != 1)
		ai_sticks = 1;
	if (is_valid_sticks(ai_sticks, *board, line_numbers - i))
		ai_plays(board, line_numbers - i, ai_sticks);
	else
	{
		ft_putendl("ERROR");
		return (1);
	}
	return (0);
}

void	play(int *board0, int line_numbers)
{
	int		*board;
	int		i;
	int		j;
	int		ai_sticks;

	board = board0;
	show_board(board, line_numbers);
	j = 0;
	i = 0;
	ai_sticks = 1;
	while (!is_board_empty(board))
	{
		show_matches(board[line_numbers - i - 1]);
		if (j % 2 == 0)
			player_plays_master(&board, i, line_numbers);
		else
			ai_plays_master(&board, i, line_numbers);
		j++;
		show_board(board, line_numbers);
		if (board[line_numbers - i - 1] == 0)
			i++;
		ai_sticks = 1;
	}
}
