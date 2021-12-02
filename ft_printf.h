/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:06:48 by smissott          #+#    #+#             */
/*   Updated: 2021/11/24 09:03:05 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);

int		ft_putchar(char c);

int		ft_putstr(char *s);

int		ft_putnbr_d(int n);

int		ft_hexa_x(unsigned long n);
int		ft_hexa_xx(unsigned long n);

int		ft_p(unsigned long n);

int		ft_putnbr_u(unsigned int n);

#endif
