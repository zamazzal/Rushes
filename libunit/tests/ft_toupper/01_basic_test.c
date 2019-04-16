/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 01:23:26 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 02:49:22 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		toupper_basic(void)
{
	int i;

	i = 1;
	while (i <= 127)
	{
		if (ft_toupper(i) != test_toupper(i))
			return (-1);
		i++;
	}
	return (0);
}
