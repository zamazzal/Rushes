/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_endl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:07:29 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 19:07:32 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	print_endl(char const *s)
{
	int		i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}