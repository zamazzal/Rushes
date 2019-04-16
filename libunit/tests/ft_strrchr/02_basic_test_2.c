/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:55:42 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 18:06:50 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic2(void)
{
	if (test_strcmp(ft_strrchr("efmwaurfas2384RGDJSM,.", '.')
	, test_strrchr("efmwaurfas2384RGDJSM,.", '.')))
		return (-1);
	return (0);
}
