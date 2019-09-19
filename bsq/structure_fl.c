/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure_FL.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:32:12 by jgonfroy          #+#    #+#             */
/*   Updated: 2019/09/18 22:03:40 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_first_line	initialisation_first_line(void)
{
	t_first_line info;

	info.size = 0;
	info.empty = 0;
	info.obstacle = 0;
	info.full = 0;
	return (info);
}

t_first_line	remplir_first_line(char *nb_lines, char *str, int size)
{
	t_first_line	info;

	info.size = putnbr(nb_lines);
	info.empty = str[size - 3];
	info.obstacle = str[size - 2];
	info.full = str[size - 1];
	return (info);
}
