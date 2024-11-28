/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:54:53 by fghanem           #+#    #+#             */
/*   Updated: 2024/09/18 16:54:56 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex_upper(unsigned int n)
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
	{
		c += ft_putchar('0');
		return (c);
	}
	h = "0123456789ABCDEF";
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
