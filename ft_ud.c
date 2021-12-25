/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ud.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:39:42 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/12/20 18:39:58 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ud(unsigned int nb, int *cp)
{
	long	nbr;

	nbr = nb;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, cp);
		ft_putnbr(nbr % 10, cp);
	}
	else
		ft_putchar(nb + 48, cp);
}
