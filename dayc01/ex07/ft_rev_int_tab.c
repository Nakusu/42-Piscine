/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:26:37 by llepage           #+#    #+#             */
/*   Updated: 2019/08/30 16:00:08 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int place;
	int temp;

	place = 0;
	while (place < ((size - 1) / 2))
	{
		temp = *(tab + place);
		*(tab + place) = *(tab + ((size - 1) - place));
		*(tab + ((size - 1) - place)) = temp;
		place++;
	}
}
