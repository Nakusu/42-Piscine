/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:36:13 by llepage           #+#    #+#             */
/*   Updated: 2019/08/30 15:52:14 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		triage(int *a, int *b)
{
	int temp;

	if (*a > *b)
	{
		temp = *b;
		*b = *a;
		*a = temp;
		return (1);
	}
	else
	{
		return (2);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int sort;
	int place;

	sort = size;
	place = 0;
	while (sort > 0)
	{
		if (place < size - 1)
		{
			if (triage((tab + place), (tab + place + 1)) == 1)
			{
				sort += 20;
			}
			else
			{
				sort--;
			}
			place++;
		}
		else
		{
			place = 0;
		}
	}
}
