/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:00:09 by llepage           #+#    #+#             */
/*   Updated: 2019/09/05 15:36:01 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	long int stock;

	stock = nb;
	if (nb < 0)
	{
		stock = -stock;
		write(1, "-", 1);
	}
	if (stock >= 0 && stock <= 9)
	{
		putchar(stock + 48);
	}
	else
	{
		ft_putnbr(stock / 10);
		putchar(stock % 10 + 48);
	}
}
