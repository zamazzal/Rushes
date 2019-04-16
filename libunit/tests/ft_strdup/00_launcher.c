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

int		strdup_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_strdup * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test 1", &strdup_basic1);
	load_test(&test, "Basic test 2", &strdup_basic2);
	load_test(&test, "Basic test 3", &strdup_basic3);
	load_test(&test, "Null test", &strdup_null);
	load_test(&test, "Hard test", &strdup_hard);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
