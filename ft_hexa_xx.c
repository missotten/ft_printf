/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_xx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:40:43 by smissott          #+#    #+#             */
/*   Updated: 2021/11/23 16:00:39 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_xx(unsigned long n)
{
	int		letter;
	char	hexa;
	int		charcount;

	charcount = 0;
	letter = 65;
	if (n >= 16)
		charcount += ft_hexa_xx(n / 16);
	hexa = n % 16;
	if (hexa > 9)
		charcount += ft_putchar(hexa - 10 + letter);
	else
		charcount += ft_putchar(hexa + 48);
	return (charcount);
}
