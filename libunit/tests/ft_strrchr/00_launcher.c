/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:45:31 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 08:02:10 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "header.h"

int		strrchr_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_strrchr * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test 01", &strrchr_basic1);
	load_test(&test, "Basic test 02", &strrchr_basic2);
	load_test(&test, "Basic test 03", &strrchr_basic3);
	load_test(&test, "Basic test 04", &strrchr_basic4);
	load_test(&test, "NULL test 01", &strrchr_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
