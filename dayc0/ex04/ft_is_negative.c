/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:12:03 by llepage           #+#    #+#             */
/*   Updated: 2019/08/28 17:35:54 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(int n)
{
	char p;
	char n;

	p = 'P';
	n = 'N';
	if (n >= 0)
		write(1, &P, 1);
	else
		write(1, &N, 1);
}
