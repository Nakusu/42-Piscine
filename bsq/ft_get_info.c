/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_info.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:10:00 by jgonfroy          #+#    #+#             */
/*   Updated: 2019/09/18 21:34:40 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int				putnbr(char *nb)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while (nb[i])
	{
		result = 10 * result + (nb[i] - 48);
		i++;
	}
	return (result);
}

char			*ft_nb_lines(char *str, char *nb_lines, int size)
{
	int l;
	int i;

	i = 0;
	l = 0;
	while (i < size && l == 0)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			l = 1;
		else
		{
			nb_lines[i] = str[i];
			i++;
		}
	}
	nb_lines[i] = 0;
	return (nb_lines);
}

int				checkarray(char *str, int size)
{
	int j;
	int i;

	j = 0;
	i = 1;
	while (j < size)
	{
		while (str[i])
		{
			if (str[i] == str[j])
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int				errordetect(char *str, int size)
{
	int j;

	j = 0;
	while (j < size - 3)
	{
		if (!(str[j] >= '0' && str[j] <= '9'))
			return (1);
		j++;
	}
	return (0);
}

t_first_line	ft_get_info(char *str)
{
	t_first_line	info;
	char			**tab;
	int				i;
	int				size;
	char			*nb_lines;

	info = initialisation_first_line();
	tab = NULL;
	i = 0;
	while (str[i] != '\n')
		i++;
	size = i;
	if (errordetect(str, size) == 0)
	{
		if (size < 4)
			return (info);
		if (!(nb_lines = malloc(sizeof(char) * (size))))
			return (info);
		ft_nb_lines(str, nb_lines, size);
		if (checkarray(str, size) == 1)
			info = remplir_first_line(nb_lines, str, size);
	}
	return (info);
}
