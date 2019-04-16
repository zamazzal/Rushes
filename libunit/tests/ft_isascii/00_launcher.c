/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:54:42 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 16:25:37 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isascii_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_isascii * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test", &isascii_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
