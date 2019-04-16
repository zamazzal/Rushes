/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:45:31 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 22:03:41 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putheader(void)
{
	print_str("\033[36;1m==============================================");
	print_str("=============================================\033[0m\n");
	print_str("\033[34;1m\t\t            .__  ._____.                .__  __");
	print_str("               \n\t\t    .__     |  | |__\\_ |__  __ __  ____");
	print_str(" |__|/  |_     .__     \n\t\t  __|  |___ |  | |  || __ \\|  |");
	print_str("  \\/    \\|  \\   __\\  __|  |___ \n\t\t /__    __/ |  |_|  ");
	print_str("|| \\_\\ \\  |  /   |  \\  ||  |   /__    __/ \n\t\t    |__| ");
	print_str("   |____/__||___  /____/|___|  /__||__|      |__|    \n\t\t ");
	print_str("                        \\/           \\/                    ");
	print_str("  \n\033[0m");
}

int		main(void)
{
	ft_putheader();
	atoi_launcher();
	isalpha_launcher();
	strncmp_launcher();
	toupper_launcher();
	isascii_launcher();
	isalnum_launcher();
	strnstr_launcher();
	strrchr_launcher();
	isdigit_launcher();
	isprint_launcher();
	strstr_launcher();
	strchr_launcher();
	strdup_launcher();
	strlen_launcher();
	strncat_launcher();
	strncpy_launcher();
	tolower_launcher();
	return (0);
}
