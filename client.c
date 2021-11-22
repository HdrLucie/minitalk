/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlucie <hlucie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 18:37:58 by hlucie            #+#    #+#             */
/*   Updated: 2021/09/24 19:02:47 by hlucie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

void	ft_ascii_to_bit(char c, int pid)
{
	int	bit;
	int	tmp;

	tmp = 0;
	bit = 7;
	while (bit--)
	{
		tmp = c >> bit;
		if (tmp & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(5000);
	}
}

void	ft_send_sig(int pid, char *msg)
{
	int	i;

	i = 0;
	while (msg[i] && ft_isprint(msg[i]))
	{
		ft_ascii_to_bit(msg[i], pid);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_atoi(argv[1]))
	{
		ft_putstr_fd("ERROR\n", 2);
		exit(0);
	}
	ft_send_sig(ft_atoi(argv[1]), argv[2]);
	return (0);
}
