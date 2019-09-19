/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:09:51 by llepage           #+#    #+#             */
/*   Updated: 2019/09/12 17:58:43 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	putchar(char caract)
{
	write(1, &caract, 1);
}

int		arraylength(char *array)
{
	int i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

void	putstr(char *array)
{
	int i;

	i = 0;
	while (array[i])
	{
		write(1, &array[i], 1);
		i++;
	}
}

void	putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		putchar(nbr + 48);
	else
	{
		putnbr(nbr / 10);
		putchar(nbr % 10 + 48);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		putstr(par[i].str);
		putchar('\n');
		putnbr(par[i].size);
		putchar('\n');
		putstr(par[i].copy);
		putchar('\n');
		i++;
	}
}
