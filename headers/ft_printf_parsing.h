/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parsing.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:34:31 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/23 14:35:26 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PARSING_H
# define FT_PRINTF_PARSING_H

#include <stdlib.h>

int	count_args(const char *str);
int	is_in_set(int c);
//int	*get_indice_args(const char *str);

#endif