/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:47:44 by llepage           #+#    #+#             */
/*   Updated: 2019/09/18 10:33:54 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		slgth(char *string);
int		in_base(char *base, char caract);
int		checkbase(char *base);
int		carray(char *array);

void	convertisseur(long int nbr, char *base, int *p, char *result)
{
	long int stock;

	stock = nbr;
	if (checkbase(base) != 1)
	{
		if (stock <= slgth(base) - 1)
			result[p[0]++] = base[(stock % slgth(base))];
		else
		{
			convertisseur((stock / slgth(base)), base, p, result);
			result[p[0]++] = base[(stock % slgth(base))];
		}
	}
}

void	compteur(long int nbr, char *base, long int *count)
{
	long int stock;

	stock = nbr;
	if (checkbase(base) != 1)
	{
		if (nbr < 0)
		{
			stock *= -1;
			*count = *count + 1;
		}
		if (stock <= slgth(base) - 1)
			*count = *count + 1;
		else
		{
			compteur((stock / slgth(base)), base, count);
			*count = *count + 1;
		}
	}
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int result;
	int signe;

	result = 0;
	signe = 1;
	i = 0;
	if (checkbase(base) != 1)
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
			result = (slgth(base) * result) + (in_base(base, str[i]));
			i++;
		}
	}
	return (result * signe);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	stock;
	long int	count;
	char		*result;
	int			pos;

	count = 0;
	pos = 0;
	result = NULL;
	if (checkbase(base_from) == 0 && checkbase(base_to) == 0)
	{
		stock = ft_atoi_base(nbr, base_from);
		compteur(stock, base_to, &count);
		result = malloc(count * sizeof(char));
		if (stock < 0)
		{
			pos = 1;
			result[0] = '-';
			stock *= -1;
		}
		convertisseur(stock, base_to, &pos, result);
		result[count] = '\0';
	}
	return (result);
}
