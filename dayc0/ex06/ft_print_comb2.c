/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 07:51:17 by llepage           #+#    #+#             */
/*   Updated: 2019/08/29 12:18:58 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put_char(char var) 
{
	write(1, &var, 1);
}	

void int_char(int var)
{
	ft_put_char((var / 10) + 48);
	ft_put_char((var % 10) + 48);
}

void print_ints(int var1, int var2)
{
	int_char(var1);
	write(1, " ", 1);
	int_char(var2);
	if (var1 != 98  ||  var2 != 99) 
	{
		write(1, ", ", 2);
	}
}	

void ft_print_comb2(void)
{
	int a; 
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		if (b <= 99)
		{
			print_ints(a, b);
			b++;		
		}
		else
		{
			a++;
			b = a + 1;
		}
	}
}
