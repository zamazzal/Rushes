/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:24:07 by sgouifer          #+#    #+#             */
/*   Updated: 2019/03/03 21:59:03 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

void	ft_doublefree(char *line, int *ptr)
{
	free(ptr);
	free(line);
}

int		check_ac(int ac)
{
	if (ac != 1 && ac != 2)
	{
		ft_putendl("Usage: ./alum1 or: ./alum1 <board.txt>");
		return (1);
	}
	return (0);
}

void	splash(void)
{
	ft_putstr_c("\n\t////// \tWelcome to Alum1 game\n", "cyan", R_C);
	ft_putstr_c("\t////// \tBy: sgouifer & zamazzal & ataleb", "cyan", R_C);
	ft_putstr_c(" Enjoy ;) \n\n", "cyan", R_C);
	ft_putstr("\n ➜ Type number of matches in each line respectively");
	ft_putstr(" then tap enter,");
	ft_putstr(" then space and tapping enter to end adding rows:\n");
}

void	ft_set(int **ptr, int *i)
{
	*ptr = NULL;
	*i = 0;
}

int		main(int ac, char **av)
{
	int		*board;
	int		line_numbers;

	ft_set(&board, &line_numbers);
	if (check_ac(ac))
		return (-1);
	if (ac == 1)
	{
		if (!(board = init_board1(&line_numbers)))
		{
			write(2, "ERROR\n", 6);
			return (-1);
		}
	}
	else if (ac == 2)
	{
		if (!(board = init_board2(av[1], &line_numbers)))
		{
			write(2, "ERROR\n", 6);
			return (-1);
		}
	}
	play(board, line_numbers);
	free(board);
	return (0);
}
