/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:24:24 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/23 15:47:20 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf_char.h"

/*
* affiche un caractère
*/
int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}