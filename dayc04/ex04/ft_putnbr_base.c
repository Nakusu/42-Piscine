/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:53:20 by llepage           #+#    #+#             */
/*   Updated: 2019/09/05 15:35:46 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		stringlenght(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int		search(char *string, char letter, int i)
{
	i++;
	while (string[i])
	{
		if (string[i] == letter)
			return (1);
		i++;
	}
	return (2);
}

int		checkbase(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if (search(base, base[i], i) == 1)
			return (1);
		i++;
	}
	return (2);
}

void	ft_putchar(char letter)
{
	write(1, &letter, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			lenbase;
	long int	stock;

	stock = nbr;
	lenbase = stringlenght(base);
	if (checkbase(base) == 2)
	{
		if (nbr < 0)
		{
			stock = -stock;
			ft_putchar('-');
		}
		if (lenbase > 1)
		{
			if (nbr != 0)
			{
				ft_putnbr_base((stock / lenbase), base);
				ft_putchar(base[(stock % lenbase)]);
			}
		}
	}
}
