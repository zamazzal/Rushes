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

int		strchr_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_strchr * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test 1", &strchr_basic1);
	load_test(&test, "Basic test 2", &strchr_basic2);
	load_test(&test, "Basic test 3", &strchr_basic3);
	load_test(&test, "Basic test 4", &strchr_basic4);
	load_test(&test, "Null test", &strchr_null);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
