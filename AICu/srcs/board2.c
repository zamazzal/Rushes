/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgouifer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 20:24:07 by sgouifer          #+#    #+#             */
/*   Updated: 2019/03/03 23:05:15 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "alum1.h"

int		ft_strdig(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != '\0')
		if (!ft_isdigit(ptr[i++]))
			return (0);
	return (1);
}

int		*ft_isvalidboard(int fd, int *ptr)
{
	int		k;
	char	*line;
	int		i;

	k = 0;
	while (get_next_line(fd, &line))
	{
		if (!ft_strdig(line))
		{
			ft_doublefree(line, ptr);
			return (NULL);
		}
		i = ft_atoi(line);
		if (i < 1 || i > 10000)
		{
			ft_doublefree(line, ptr);
			return (NULL);
		}
		ptr[k++] = i;
		free(line);
	}
	ptr[k] = 0;
	return (ptr);
}

int		ft_getlines(int fd)
{
	int		rd;
	char	bfr[5];
	char	*ptr;
	char	*tmp;
	int		x;

	ptr = (char*)malloc(sizeof(*ptr));
	*ptr = 0;
	while ((rd = read(fd, bfr, 4)))
	{
		bfr[rd] = '\0';
		tmp = ptr;
		ptr = ft_strjoin(ptr, bfr);
		if (tmp != NULL)
			free(tmp);
	}
	x = countantin(ptr);
	free(ptr);
	return (x);
}

int		*getlent(char *name, int *lines_number)
{
	int *ptr;
	int fd;
	int lines;

	fd = open(name, O_RDONLY);
	lines = ft_getlines(fd);
	*lines_number = lines;
	ptr = (int *)malloc(sizeof(int) * (lines + 1));
	close(fd);
	return (ptr);
}

int		*init_board2(char *av, int *lines_number)
{
	int		*board;
	int		fd;

	if ((fd = open(av, O_RDONLY)) != -1)
	{
		board = getlent(av, lines_number);
		if ((board = ft_isvalidboard(fd, board)) == NULL)
			return (NULL);
		close(fd);
	}
	else
		return (NULL);
	if (*lines_number == 0)
		return (NULL);
	return (board);
}
