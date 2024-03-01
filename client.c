/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:04:27 by mabarbos          #+#    #+#             */
/*   Updated: 2024/03/01 15:04:27 by mabarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

int	valid_pid(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (!ft_isdigit(s[i]))
			return (0);
	if (ft_strlen(s) < 3 || ft_strlen(s) > 5)
		return (0);
	return (1);
}

void	char_to_byte(char *s, pid_t pid)
{
	int	i;
	int	num_bit;

	i = -1;
	while (s[++i])
	{
		num_bit = -1;
		while (++num_bit < 8)
		{
			if ((s[i] & (128 >> num_bit)) == 0)
			{
				if (kill(pid, SIGUSR2) == -1)
					exit(1);
			}
			else
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(1);
			}
			usleep(100);
		}
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3)
		return (0);
	if (!valid_pid(argv[1]))
		return (0);
	pid = ft_atoi(argv[1]);
	char_to_byte(argv[2], pid);
	ft_printf("done :)\n");
	return (0);
}