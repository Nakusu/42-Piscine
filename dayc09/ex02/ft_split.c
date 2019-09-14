/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:02:30 by llepage           #+#    #+#             */
/*   Updated: 2019/09/14 15:26:57 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		detectsep(char caract, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == caract)
			return (1);
		i++;
	}
	return (0);
}

int		determinel(char *str, char *charset)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (str[i])
	{
		if ((detectsep(str[i], charset) == 1 || str[i + 1] == 0)
			&& i != 0 && detectsep(str[i - 1], charset) != 1)
			s++;
		i++;
	}
	return (s);
}

void	arrayadd(char *stock, char *str, int d, int max)
{
	int s;
	int i;

	i = d;
	s = 0;
	while (i < (d + max))
	{
		stock[s] = str[i];
		i++;
		s++;
	}
	stock[s] = 0;
}

void	varoutils(int *i, int *s, int *p, int type)
{
	if (type == 0)
	{
		*i = 0;
		*s = 0;
		*p = 0;
	}
	else if (type == 1)
	{
		*s = 0;
		*i = *i + 1;
	}
	else if (type == 2)
		*i = *i + 1;
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		s;
	int		p;
	char	**stock;

	varoutils(&i, &s, &p, 0);
	if (!(stock = malloc(sizeof(*stock) * (determinel(str, charset) + 1))))
		return (stock);
	while (str[i])
	{
		while (detectsep(str[i], charset) == 0 && str[i])
		{
			s++;
			if (detectsep(str[i + 1], charset) == 1 || str[i + 1] == 0)
			{
				stock[p] = malloc(sizeof(**stock) * (s + 1));
				arrayadd(stock[p], str, (i - (s - 1)), s);
				p++;
			}
			varoutils(&i, &s, &p, 2);
		}
		varoutils(&i, &s, &p, 1);
	}
	stock[p] = 0;
	return (stock);
}
