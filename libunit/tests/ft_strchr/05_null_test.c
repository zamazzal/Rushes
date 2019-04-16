/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 03:00:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 03:20:46 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_null(void)
{
	if (test_strcmp(ft_strchr("efmw", 0), test_strchr("efmw", 0)))
		return (-1);
	return (0);
}
