/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_base_test_00.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:11:23 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 19:01:53 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int		strncmp_hard(void)
{
	char	str[500];
	char	str2[500];

	test_strcpy(str, "abcdefghijabcdefghijabcdefghijabcdefghijabcdefg");
	test_strcpy(str + test_strlen(str), "hijabcdefghijabcdefghij");
	test_strcpy(str2, "abcdefghijabcdefghijabcdefghijabcdefghijabcdefghij");
	test_strcpy(str2 + test_strlen(str), "abcdefghijabcdefghij");
	if (ft_strncmp(str, str2, 71) != test_strncmp(str, str2, 71))
		return (-1);
	return (0);
}
