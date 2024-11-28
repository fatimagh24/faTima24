/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fghanem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:41:28 by fghanem           #+#    #+#             */
/*   Updated: 2024/09/22 13:16:13 by fghanem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

static int	ft_typecheck(char f, va_list arg)
{
	int	count;

	count = 0 ;
	if (f == 'd' || f == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (f == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (f == 'u')
		count += ft_putunsigned(va_arg(arg, unsigned int));
	else if (f == 'x')
		count += ft_puthex(va_arg(arg, unsigned int));
	else if (f == 'X')
		count += ft_puthex_upper(va_arg(arg, unsigned int));
	else if (f == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (f == 'p')
		count = ft_putptr(va_arg(arg, void *));
	else
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *f, ...)
{
	va_list	arg;
	int		count;
	int		i;

	va_start(arg, f);
	i = 0;
	count = 0;
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			count += ft_typecheck(f[i], arg);
			i++;
		}
		else
		{
			count += ft_putchar(f[i]);
			i++;
		}
	}
	va_end(arg);
	return (count);
}

/*
int main()
{
    int count;

    count = ft_printf("Integer: %d\n", 42);
    printf("Printed %d characters\n", count);
	long longValue = LONG_MAX;
    printf("Using standard printf: Address of longValue = %p\n",
     (void*)&longValue);
    ft_printf("Using ft_printf: Address of longValue = %p\n",
     (void*)&longValue);

    count = ft_printf("Unsigned: %u\n", 12345);
    printf("Printed %d characters\n", count);

    count = ft_printf("Hexadecimal: %x %X\n", 255, 255);
    printf("Printed %d characters\n", count);

    //count = ft_printf("%c\n", "");
   printf("%s\n", "");
    return 0;
}
*/
