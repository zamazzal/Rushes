/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:58:27 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 03:08:06 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strrchr_basic4(void)
{
	if (ft_strrchr("efmwaurfas2384RGDJSM,.", 'x') != NULL)
		return (-1);
	return (0);
}
