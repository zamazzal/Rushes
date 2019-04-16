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

int		isdigit_launcher(void)
{
	int			ret;
	t_unit_test	*test;

	test = NULL;
	print_str(CYAN("======================================="));
	print_str(BLUE(" * ft_isdigit * "));
	print_str(CYAN("=======================================\n"));
	load_test(&test, "Basic test", &isdigit_basic1);
	ret = launch_tests(&test);
	clean_test(&test);
	return (ret);
}
