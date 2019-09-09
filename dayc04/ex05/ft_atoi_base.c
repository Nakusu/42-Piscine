/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:47:44 by llepage           #+#    #+#             */
/*   Updated: 2019/09/09 18:14:18 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		slength(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int		in_base(char *base, char caract)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == caract)
			return (i);
		i++;
	}
	return (-1);
}

int		checkbase(char *base)
{
	int i;

	i = 0;
	if (slength(base) > 0)
	{
		while (base[i])
		{
			if (base[i] == '-' || base[i] == '+')
				return (1);
			i++;
		}
	}
	return (0);
}

int		caractarray(char *array)
{
	int i;
	int p;

	i = 0;
	p = 1;
	while (array[i])
	{
		while (array[p])
		{
			if (array[p] == array[i])
				return (1);
			p++;
		}
		i++;
		p = i + 1;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int result;
	int signe;

	result = 0;
	signe = 1;
	i = 0;
	if (checkbase(base) != 1 && caractarray(base) != 1)
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signe = -signe;
			i++;
		}
		while (in_base(base, str[i]) > -1)
		{
			result = (slength(base) * result) + (in_base(base, str[i]));
			i++;
		}
	}
	return (signe * result);
}
