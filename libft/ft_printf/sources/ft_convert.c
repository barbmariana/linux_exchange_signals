/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:05 by mabarbos          #+#    #+#             */
/*   Updated: 2024/03/01 15:09:06 by mabarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

char	*ft_convert(size_t num, char *repres)
{
	static char	buffer[50];
	char		*ptr;
	int			base;

	base = ft_strlen(repres);
	ptr = &buffer[49];
	*ptr = '\0';
	*--ptr = repres[num % base];
	num /= base;
	while (num != 0)
	{
		*--ptr = repres[num % base];
		num /= base;
	}
	return (ptr);
}
