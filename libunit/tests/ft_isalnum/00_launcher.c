/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:10:41 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 19:10:44 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		isalnum_launcher(void)
{
	int				ret;
	t_unit_test		*test;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_isalnum * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test", &isalnum_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
