/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:24:07 by sgouifer          #+#    #+#             */
/*   Updated: 2019/03/03 21:27:50 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

int		is_looser(int nb)
{
	if ((nb % 10 == 1 || nb % 10 == 5 || nb % 10 == 9) && ((((nb % 100) / 10)
		% 2) == 0))
		return (1);
	if ((nb % 10 == 3 || nb % 10 == 7) && ((((nb % 100) / 10) % 2) == 1))
		return (1);
	return (0);
}

void	read_number(int *n, char *msg)
{
	char	data[6];

	ft_putstr(msg);
	read(0, data, 6);
	*n = ft_atoi(data);
}

int		read_number2(int *n, char *msg)
{
	char	data[6];
	int		r;

	ft_putstr(msg);
	if ((r = read(0, data, 6)) == -1)
		return (-1);
	data[r] = '\0';
	*n = ft_atoi(data);
	if (*n == 0 && ft_strcmp(data, "\n") != 0)
		return (-1);
	return (*n);
}

int		copy_table_to_tab(int *tab1, int **tab2, int size)
{
	int i;

	i = 0;
	while (is_valid_number(tab1[i]))
	{
		(*tab2)[i] = tab1[i];
		i++;
	}
	if (size != i)
		return (1);
	return (0);
}

int		*init_board1(int *line_numbers)
{
	int	*board;
	int i;
	int board_max[133742];
	int x;

	i = 0;
	splash();
	while (i < 10000)
	{
		ft_putstr(" ");
		x = read_number2(&board_max[i], "");
		if (x == -1)
			return (NULL);
		if (!(x >= 1 && x <= 10000))
			break ;
		i++;
	}
	if (i == 0)
		return (NULL);
	*line_numbers = i;
	board = (int *)malloc(sizeof(int) * (i));
	if (copy_table_to_tab(board_max, &board, i))
		return (NULL);
	return (board);
}
