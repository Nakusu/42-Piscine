/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:23:14 by llepage           #+#    #+#             */
/*   Updated: 2019/09/08 21:09:03 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		doublelength(char **string)
{
	int i;
	int s;
	int total;

	i = 1;
	s = 0;
	total = 0;
	while (string[i])
	{
		while (string[i][s])
		{
			total++;
			s++;
		}
		s = 0;
		i++;
	}
	return (total);
}

int		sz(char *s1, char **s2, int t)
{
	int i;

	i = 0;
	if (t == 1)
		while (s1[i])
			i++;
	else
		while (s2[i])
			i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		p;
	int		s;
	char	*stock;

	i = 1;
	p = 0;
	s = 0;
	stock = malloc((doublelength(strs) + ((sz(sep, strs, 1) - 1) * sz(sep, strs, 2))) * sizeof(char));
	while (strs[i])
	{
		while (strs[i][s])
		{
			stock[p] = strs[i][s];
			s++;
			p++;
		}
		s = 0;
		while (sep[s] && i != sz(sep, strs, 2) - 1)
		{
			stock[p] = sep[s];
			p++;
			s++;
		}
		s = 0;
		i++;
	}
	stock[p] = '\0';
	return (stock);
}

int		main(int argc, char **argv)
{
	char	sep[] = ",";
	int		i;
	
	char *test = ft_strjoin(3, argv, sep);
	i = 0;
	while (test[i])
	{
		printf("%c", test[i]);
		i++;
	}
}

int test()
{
	return (0);
}
