/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:24:08 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/23 16:02:05 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//objectif -> Faire du parsing sur le format. Compter le nombre d'arguments necessaires.
//enregistrer les indices de l'endroit ou se trouve les %d, ect... dans un tableau ?  
//+ verifier si je gère ces cas là. si ils sont dans la liste de course.

int	apply_format(int c, va_list *elem)
{
	if (c == 's')
		return (ft_putstr(va_arg(*elem, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(*elem, int)));
	else if (c == 'p')
		return (0);
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*elem, int)));
	else if (c == 'u')
		return (ft_unsigned_putnbr(ft_putnbr(va_arg(*elem, unsigned int))));
	else if (c == 'x')
		return (0);
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'X')
		return (0);
	return (0);
}
#include <stdio.h>
int	ft_printf(const char *format, ...)
{
	int	printed_count;
	va_list args;
	int	i;
	
	i = 0;
	printed_count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && is_in_set(format[i + 1]))
		{
			printed_count += apply_format(format[i + 1], &args);
			i += 1;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else
			printed_count += ft_putchar(format[i]);
		i ++;
	}
	va_end(args);
	return (printed_count);
}