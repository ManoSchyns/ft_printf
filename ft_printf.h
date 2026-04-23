/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:24:11 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/23 15:34:50 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "headers/ft_printf_char.h"
#include "headers/ft_printf_string.h"
#include "headers/ft_printf_parsing.h"
#include "headers/ft_printf_decimal.h"

int	ft_printf(const char *format, ...);

#endif