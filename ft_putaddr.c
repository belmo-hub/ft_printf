/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:49:01 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/12/20 18:54:05 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hex_addr(unsigned long n, int *cp)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n < 16)
		*cp += write(1, &hex[n], 1);
	else
	{
		ft_hex_addr(n / 16, cp);
		ft_hex_addr(n % 16, cp);
	}
}

void	ft_putaddr(unsigned long nb, int *cp)
{
	*cp += write(1, "0x", 2);
	ft_hex_addr(nb, cp);
}
