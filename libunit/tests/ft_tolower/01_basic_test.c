/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:36:25 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 02:48:33 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		tolower_basic(void)
{
	int i;

	i = 1;
	while (i <= 127)
	{
		if (ft_tolower(i) != test_tolower(i))
			return (-1);
		i++;
	}
	return (0);
}
