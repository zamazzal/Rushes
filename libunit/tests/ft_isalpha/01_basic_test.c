/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:12:11 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 20:12:12 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isalpha_basic1(void)
{
	int		c;

	c = -1;
	while (c < 150)
	{
		if (ft_isalpha(c) != test_isalpha(c))
			return (-1);
		c++;
	}
	return (0);
}
