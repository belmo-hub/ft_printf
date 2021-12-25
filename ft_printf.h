/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelmokh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:52:54 by ybelmokh          #+#    #+#             */
/*   Updated: 2021/12/25 00:18:58 by ybelmokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *cp);
void	ft_putnbr(int nb, int *cp);
void	ft_putstr(char *str, int *cp);
void	ft_ud(unsigned int nb, int *cp);
void	ft_hex_x(unsigned int n, int *cp);
void	ft_hex_up(unsigned int n, int *cp);
void	ft_convert(const char *format, int *cp, void *str);
void	ft_putaddr(unsigned long nb, int *cp);

#endif
