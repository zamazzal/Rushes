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

int		strlen_launcher(void)
{
	t_unit_test	*test;
	int			ret;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_strlen * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test 01", &strlen_basic1);
	load_test(&test, "Basic test 02", &strlen_basic2);
	load_test(&test, "Basic test 03", &strlen_basic3);
	load_test(&test, "Null test 01", &strlen_null);
	load_test(&test, "Big test 01", &strlen_big);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
