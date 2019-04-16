/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:54:41 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 19:02:51 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncat_hard(void)
{
	char	*dest;
	char	str[500];

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (-1);
	test_strcpy(str, "Lorem ipsum dolor sit amet, consectetur adipiscing ");
	test_strcpy(str + test_strlen(str), "elit. Suspendisse at neque in sapie");
	test_memset(dest, 'r', 6);
	if (test_strcmp(ft_strncat(dest, str, 5), test_strncat(dest, str, 5)))
		return (-1);
	return (0);
}
