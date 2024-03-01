/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:34 by mabarbos          #+#    #+#             */
/*   Updated: 2024/03/01 15:09:35 by mabarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void	ft_putchar(char c, int *ret_val)
{
	*ret_val += write(1, &c, 1);
}

void	ft_putstr(char *s, int *ret_val)
{
	if (!s)
	{
		ft_putstr("(null)", ret_val);
		return ;
	}
	while (*s)
		*ret_val += write(1, s++, 1);
}
