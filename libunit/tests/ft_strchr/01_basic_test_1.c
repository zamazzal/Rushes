/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 02:51:32 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/01 03:20:28 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strchr_basic1(void)
{
	if (test_strcmp(ft_strchr("abcdef", 'd'), test_strchr("abcdef", 'd')))
		return (-1);
	return (0);
}
