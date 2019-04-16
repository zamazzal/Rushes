/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:06:56 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 19:31:05 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdio.h>

static char		*get_result(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return ("\033[32mOK\033[0m");
	}
	else if (WTERMSIG(status) == SIGSEGV)
		return ("\033[31mSegfault\033[0m");
	else if (WTERMSIG(status) == SIGBUS)
		return ("\033[31mBusError\033[0m");
	return ("\033[31mKO\033[0m");
}

static void		child(t_unit_test **test)
{
	int	return_value;

	return_value = (*test)->test_fct();
	exit(return_value);
}

static void		parent(char *name, int *success)
{
	int	status;

	status = 0;
	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		*success += 1;
	print_str(MAGENTA("		* "));
	print_str(name);
	print_str(MAGENTA("	: "));
	print_str(MAGENTA("["));
	print_str(get_result(status));
	print_str(MAGENTA("] \n"));
}

int				launch_tests(t_unit_test **list)
{
	int	success;
	int	counter;
	int	pid;

	success = 0;
	counter = 0;
	while (*list)
	{
		pid = fork();
		if (pid < 0)
			print_str(RED("failed to launch test\n"));
		else if (pid == 0)
			child(list);
		else if (pid > 0)
			parent((*list)->name, &success);
		*list = (*list)->next;
		counter++;
	}
	print_str(YELLOW("				Successful test "));
	print_nbr(success);
	print_str(YELLOW("/"));
	print_nbr(counter);
	print_str(YELLOW(" tests checked\n"));
	return ((counter == success) ? 0 : 1);
}
