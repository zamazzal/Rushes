/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:10:22 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 20:39:13 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		atoi_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_atoi * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test 01", &atoi_basic1);
	load_test(&test, "Basic test 02", &atoi_basic2);
	load_test(&test, "Basic test 03", &atoi_basic3);
	load_test(&test, "Basic test 04", &atoi_basic4);
	load_test(&test, "Basic test 05", &atoi_basic5);
	load_test(&test, "Basic test 06", &atoi_basic6);
	load_test(&test, "Basic test 07", &atoi_basic7);
	load_test(&test, "Basic test 08", &atoi_basic8);
	load_test(&test, "Basic test 09", &atoi_basic9);
	load_test(&test, "Basic test 10", &atoi_basic10);
	load_test(&test, "Basic test 11", &atoi_basic11);
	load_test(&test, "Basic test 12", &atoi_basic12);
	load_test(&test, "Basic test 13", &atoi_basic13);
	load_test(&test, "Basic test 14", &atoi_basic14);
	load_test(&test, "Basic test 15", &atoi_basic15);
	load_test(&test, "Basic test 16", &atoi_basic16);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
