/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:08:17 by llepage           #+#    #+#             */
/*   Updated: 2019/09/16 16:29:38 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *stock;

	i = 0;
	if (!(stock = malloc(sizeof(int) * length)))
		return (stock);
	while (i < length)
	{
		stock[i] = (*f)(tab[i]);
		i++;
	}
	return (stock);
}

int		more(int i)
{
	return (i * 2);
}
