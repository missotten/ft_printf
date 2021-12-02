/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:29:24 by smissott          #+#    #+#             */
/*   Updated: 2021/11/23 16:01:48 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_x(unsigned long n)
{
	int		letter;
	char	hexa;
	int		charcount;

	charcount = 0;
	letter = 97;
	if (n >= 16)
		charcount += ft_hexa_x(n / 16);
	hexa = n % 16;
	if (hexa > 9)
		charcount += ft_putchar(hexa - 10 + letter);
	else
		charcount += ft_putchar(hexa + 48);
	return (charcount);
}
