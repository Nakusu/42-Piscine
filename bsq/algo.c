/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:20:54 by jgonfroy          #+#    #+#             */
/*   Updated: 2019/09/18 21:39:27 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int				**len_square(int **map, int nbl, int size)
{
	int i;
	int j;
	int min;

	i = 0;
	j = 0;
	while (++i < nbl)
	{
		while (++j < size)
		{
			if (map[i][j] != 0)
			{
				min = map[i - 1][j];
				if (map[i][j - 1] < min)
					min = map[i][j - 1];
				if (map[i - 1][j - 1] < min)
					min = map[i - 1][j - 1];
				map[i][j] = map[i][j] + min;
			}
			else
				map[i][j] = 0;
		}
		j = 0;
	}
	return (map);
}

t_pos_square	find_square(int **map, int nbl, int size)
{
	int				i;
	int				j;
	t_pos_square	max;

	i = 0;
	j = 0;
	max.valeur = map[i][j];
	max.i = i;
	max.j = j;
	while (i < nbl)
	{
		j = 0;
		while (j < size)
		{
			if (map[i][j] > max.valeur)
			{
				max.valeur = map[i][j];
				max.i = i;
				max.j = j;
			}
			j++;
		}
		i++;
	}
	return (max);
}
