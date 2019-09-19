/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 09:52:39 by llepage           #+#    #+#             */
/*   Updated: 2019/09/19 17:57:52 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(int c1, int c2)
{
	return (c1 - c2);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;
	int s1;
	int s2;

	i = 0;
	s1 = 1;
	s2 = 1;
	j = 0;
	while (i < length)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0 && (i + 1) < length)
			s1 = 0;
		i++;
	}
	while (j < length)
	{
		if ((*f)(tab[j], tab[j + 1]) > 0 && (j + 1) < length)
			s2 = 0;
		j++;
	}
	if (s1 == 0 && s2 == 0)
		return (0);
	return (1);
}
