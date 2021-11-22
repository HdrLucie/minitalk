/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlucie <hlucie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:39:20 by hlucie            #+#    #+#             */
/*   Updated: 2021/09/24 18:44:53 by hlucie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void	ft_print_msg(int signum)
{
	static int	i = 6;
	static char	c = 0;

	if (signum == SIGUSR1)
		c |= 0 << i;
	else if (signum == SIGUSR2)
		c |= 1 << i;
	i--;
	if (i < 0)
	{
		write(1, &c, 1);
		i = 6;
		c = 0;
	}
}

int	main(void)
{
	struct sigaction	s_sigaction;

	s_sigaction.sa_handler = ft_print_msg;
	s_sigaction.sa_flags = 0;
	sigemptyset(&s_sigaction.sa_mask);
	ft_putstr_fd("SERVEUR PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		if (sigaction(SIGUSR1, &s_sigaction, NULL) == -1)
		{
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		if (sigaction(SIGUSR2, &s_sigaction, NULL) == -1)
		{
			ft_putstr_fd("Error\n", 2);
			exit(0);
		}
		pause();
	}
	return (0);
}
