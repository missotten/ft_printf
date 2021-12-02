/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:48:52 by smissott          #+#    #+#             */
/*   Updated: 2021/11/23 17:19:20 by smissott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int	charcount;

	charcount = 0;
	if (n > 9)
		charcount += ft_putnbr_u(n / 10);
	charcount += ft_putchar((n % 10) + '0');
	return (charcount);
}
