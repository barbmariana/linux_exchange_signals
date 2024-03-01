/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:40 by mabarbos          #+#    #+#             */
/*   Updated: 2024/03/01 15:09:41 by mabarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

void	ft_putunbr(unsigned int num, int *ret_val)
{
	char	s[10];
	int		i;

	i = 0;
	if (num == 0)
		ft_putchar('0', ret_val);
	while (num)
	{
		s[i++] = num % 10 + '0';
		num /= 10;
	}
	while (i--)
		ft_putchar(*(s + i), ret_val);
}
