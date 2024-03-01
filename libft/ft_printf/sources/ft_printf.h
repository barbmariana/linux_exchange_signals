/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbos <mabarbos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:09:13 by mabarbos          #+#    #+#             */
/*   Updated: 2024/03/01 15:55:11 by mabarbos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c, int *ret_val);
void	ft_putstr(char *str, int *ret_val);
void	ft_putnbr(int num, int *ret_val);
void	*ft_memset(void *ptr, int c, size_t size);
void	ft_putptr(unsigned long num, int *ret_val);
void	ft_putunbr(unsigned int num, int *ret_val);

int	ft_strlen(const char *str);

char	*ft_convert(size_t num, char *repres);

int		ft_printf(const char *str, ...);

#endif