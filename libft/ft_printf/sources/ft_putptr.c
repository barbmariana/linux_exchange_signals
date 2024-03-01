/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:27 by mabarbos          #+#    #+#             */
/*   Updated: 2024/03/01 15:09:28 by mabarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

void	ft_putptr(unsigned long num, int *ret_val)
{
	if (num == 0)
	{
		ft_putstr("0x0", ret_val);
		return ;
	}
	ft_putstr("0x", ret_val);
	ft_putstr(ft_convert(num, "0123456789abcdef"), ret_val);
}
