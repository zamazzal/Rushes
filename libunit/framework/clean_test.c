/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:06:45 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 19:06:48 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	clean_test(t_unit_test **test_list)
{
	t_unit_test	*tmp1;
	t_unit_test	*tmp2;

	if (!test_list || !(*test_list))
		return ;
	tmp2 = *test_list;
	tmp1 = tmp2;
	while (tmp1)
	{
		tmp1 = tmp2;
		tmp2 = tmp1->next;
		free(tmp1);
		tmp1 = NULL;
	}
	*test_list = NULL;
}
