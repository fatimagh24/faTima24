/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:17:23 by fghanem           #+#    #+#             */
/*   Updated: 2024/09/18 17:17:54 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *f, ...);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_putunsigned(unsigned int nb);
int	ft_putptr(void *p);
#endif
