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

int		isprint_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_isprint * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test", &isprint_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
