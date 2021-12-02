/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 08:59:35 by smissott          #+#    #+#             */
/*   Updated: 2021/11/24 09:03:02 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_percentage(va_list args, const char *format);

int	ft_printf(const char *format, ...)
{	
	size_t	i;
	int		charcount;
	va_list	args;

	i = 0;
	charcount = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			charcount += ft_putchar(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			charcount += print_percentage(args, &format[i]);
			i++;
		}
		va_end(args);
	}
	return (charcount);
}

static int	print_percentage(va_list args, const char *format)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_p(va_arg(args, unsigned long)));
	else if (*format == 'd')
		return (ft_putnbr_d(va_arg(args, int)));
	else if (*format == 'i')
		return (ft_putnbr_d(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_putnbr_u(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (ft_hexa_x((unsigned long)va_arg(args, unsigned int)));
	else if (*format == 'X')
		return (ft_hexa_xx((unsigned long)va_arg(args, unsigned int)));
	else if (*format == '%')
		return (ft_putchar('%'));
	return (0);
}
