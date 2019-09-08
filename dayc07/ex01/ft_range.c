/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:24:27 by llepage           #+#    #+#             */
/*   Updated: 2019/09/08 13:51:45 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int p;
	int *liste;

	liste = NULL;
	if (min < max && min != max)
	{
		liste = malloc((max - min) * sizeof(int));
		if (liste != NULL)
		{
			i = min;
			p = 0;
			while (i < max)
			{
				liste[p] = i;
				i++;
				p++;
			}
		}
	}
	return (liste);
}
