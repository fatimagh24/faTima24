/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:26:49 by fghanem           #+#    #+#             */
/*   Updated: 2024/09/17 11:26:51 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nb)
{
	int	c;

	c = 0;
	if (nb >= 10)
	{
		c += ft_putunsigned(nb / 10);
	}
	c += ft_putchar((nb % 10) + '0');
	return (c);
}
