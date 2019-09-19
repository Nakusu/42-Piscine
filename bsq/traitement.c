/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   traitement.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:12:34 by jgonfroy          #+#    #+#             */
/*   Updated: 2019/09/18 23:24:02 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	setresult(char **stock, t_pos_square solution)
{
	int i;
	int j;
	int is;
	int js;

	i = solution.i;
	j = solution.j;
	is = i - (solution.valeur - 1);
	js = j - (solution.valeur - 1);
	while (i >= is)
	{
		j = solution.j;
		while (j >= js)
		{
			stock[i][j] = '*';
			j--;
		}
		i--;
	}
}
