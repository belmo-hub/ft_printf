/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:55:01 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/12/25 00:05:26 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(const char *format, int *cp, void *str)
{
	if (*format == 'c')
		ft_putchar((char)str, cp);
	else if (*format == 's')
		ft_putstr((char *)str, cp);
	else if (*format == 'p')
		ft_putaddr((unsigned long)str, cp);
	else if (*format == 'd' || *format == 'i')
		ft_putnbr((int)str, cp);
	else if (*format == 'u')
		ft_ud((unsigned int)str, cp);
	else if (*format == 'x')
		ft_hex_x((unsigned int)str, cp);
	else if (*format == 'X')
		ft_hex_up((unsigned int)str, cp);
	else
		return ;
}
