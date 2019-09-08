/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:53:02 by llepage           #+#    #+#             */
/*   Updated: 2019/09/08 14:22:44 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int p;

	p = 0;
	i = -1;
	(*range) = NULL;
	if (min < max && max != min)
	{
		i = min;
		*range = malloc((max - min) * sizeof(int));
		while (i < max)
		{
			(*range)[p] = i;
			i++;
			p++;
		}
	}
	return (i);
}
