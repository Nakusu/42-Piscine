/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 17:34:34 by llepage           #+#    #+#             */
/*   Updated: 2019/09/18 23:29:07 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		stringlgth(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *array)
{
	int i;

	i = 0;
	while (array[i])
	{
		write(1, &array[i], 1);
		i++;
	}
}

void	ft_putchar(char caract)
{
	write(1, &caract, 1);
}

int		caractverif(t_first_line info, char caract)
{
	if (caract != info.empty && caract != info.obstacle)
		return (0);
	return (1);
}

int		arrayverif(t_first_line info, char **map)
{
	int i;
	int s;

	i = 0;
	while (map[i])
	{
		s = 0;
		while (map[i][s])
		{
			if (caractverif(info, map[i][s]) != 1)
				return (0);
			s++;
		}
		i++;
	}
	return (1);
}
