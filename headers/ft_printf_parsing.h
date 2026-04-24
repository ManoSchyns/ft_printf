/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parsing.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:56:09 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/24 10:44:18 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PARSING_H
# define FT_PRINTF_PARSING_H

# include <stdarg.h>
# include "ft_printf_char.h"
# include "ft_printf_string.h"
# include "ft_printf_decimal.h"
# include "ft_printf_hexa.h"
# include "ft_printf_pointeur.h"

int	parsing(const char *format, va_list *args);

#endif