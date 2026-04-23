/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschyns <mano.schyns@learner.42.tech>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:34:28 by mschyns           #+#    #+#             */
/*   Updated: 2026/04/23 15:47:55 by mschyns          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf_parsing.h"

/*
* Return 1 si le caractère c est présent 
* dans le set des conversions prises en compte
* Return 0 si non
*/
int	is_in_set(int c)
{
	int	i;
	char	*set;

	set = "cspdiuxX%";
	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

/*
* Return le nombre de conversions a faire, ect ..
*/
int	count_args(const char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && is_in_set(str[i + 1]))
			count ++;
		i ++;
	}
	return (count);
}
/*
* Return la liste des indices de l'endroit ou 
* se trouve les conversions valides, ect ..
* Return NULL si il n'y a pas d'arguments
* Tableau à free !!
*/
/*int	*get_indice_args(const char *str)
{
	int		i;
	int		count;
	int		*tab;
	char	*set;
	int		j;

	set = "cspdiuxX%";
	count = count_args(str);
	if (count == 0)
		return (NULL);
	tab = malloc(count * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count)
	{
		if (str[j] == '%' && is_in_set(str[j + 1], set))
		{
			tab[i] = j;
			i ++;
		}
		j ++;
	}
	return (tab);
}*/

/*#include <stdio.h>
int main()
{
	int total;
	const char *str = "%s %d %%";

	total = count_args(str);
	printf("%d\n", total);
}*/