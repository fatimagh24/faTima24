/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:26:02 by fghanem           #+#    #+#             */
/*   Updated: 2024/09/17 15:20:30 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n)
{
	char			*h;
	char			hex[17];
	int				c;
	int				i;
	unsigned long	nb;

	nb = (unsigned long)n;
	c = 0;
	i = 0;
	if (nb == 0)
		return (ft_putchar('0'));
	h = "0123456789abcdef";
	while (nb > 0)
	{
		hex[i] = h[nb % 16];
		nb /= 16;
		i++;
	}
	hex[i] = '\0';
	while (--i >= 0)
		c += ft_putchar(hex[i]);
	return (c);
}
/*
int main ()
{
	int a = 291;
	ft_printf("%x", a);
	return (0);
}*/
