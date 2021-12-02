/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:12:23 by smissott          #+#    #+#             */
/*   Updated: 2021/11/23 17:17:13 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_d(int n)
{
	int	charcount;

	charcount = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			charcount += ft_putchar('-');
			n = n * -1;
		}
		if (n > 9)
			charcount += ft_putnbr_d(n / 10);
		charcount += ft_putchar((n % 10) + '0');
	}
	return (charcount);
}
