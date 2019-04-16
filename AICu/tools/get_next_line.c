/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 21:52:47 by zamazzal          #+#    #+#             */
/*   Updated: 2019/03/03 22:48:06 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*ptr;
	char		*tmp;
	int			rd;
	char		bfr[BUFF_SIZE + 1];

	ptr = (!ptr) ? "" : ptr;
	while ((rd = read(fd, bfr, BUFF_SIZE)))
	{
		bfr[rd] = '\0';
		tmp = ptr;
		ptr = ft_strjoin(ptr, bfr);
		(ft_strlen(tmp) != 0) ? free(tmp) : 0;
		if (ft_strchr(ptr, '\n'))
			break ;
	}
	rd = 0;
	if (ptr[0] == '\0')
		return (0);
	while (ptr[rd] && ptr[rd] != '\n')
		rd++;
	*line = ft_strsub(ptr, 0, rd);
	tmp = ptr;
	ptr = (ft_strchr(ptr, ptr[rd]) + 1);
	free(tmp);
	return (1);
}
