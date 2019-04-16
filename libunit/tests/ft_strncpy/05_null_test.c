/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:40:37 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 18:07:12 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncpy_null(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 30)))
		return (0);
	test_memset(dest, 'c', 30);
	if (test_strcmp(ft_strncpy(dest, "lorem ipsum dolor sit amet", 0)
	, test_strncpy(dest, "lorem ipsum dolor sit amet", 0)))
	{
		free(dest);
		return (-1);
	}
	free(dest);
	return (0);
}
