/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:13:23 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/12/25 00:10:15 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		cp;
	va_list	args;

	va_start (args, str);
	cp = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		else if (str[i] == '%')
		{
			i++;
			if (str[i] && str[i] != '%')
				ft_convert(&str[i], &cp, va_arg(args, void *));
			else if (str[i] == '%')
				ft_putchar(str[i], &cp);
		}
		else
			ft_putchar(str[i], &cp);
		i++;
	}
	va_end (args);
	return (cp);
}
