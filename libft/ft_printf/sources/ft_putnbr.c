/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:18 by mabarbos          #+#    #+#             */
/*   Updated: 2024/03/01 15:09:19 by mabarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

void	ft_putnbr(int num, int *ret_val)
{
	if (num < 0)
	{
		ft_putchar('-', ret_val);
		if (num == -2147483648)
		{
			ft_putchar('2', ret_val);
			ft_putnbr(147483648, ret_val);
			return ;
		}
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10, ret_val);
	ft_putchar(num % 10 + 48, ret_val);
}
