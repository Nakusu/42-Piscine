/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:32:58 by jgonfroy          #+#    #+#             */
/*   Updated: 2019/09/18 23:19:49 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(char *str, int end, int size)
{
	int		i;
	int		start;
	char	*dest;

	i = 0;
	start = end - size;
	dest = NULL;
	dest = malloc(sizeof(*dest) * (size + 1));
	while (start < end)
	{
		dest[i] = str[start];
		i++;
		start++;
	}
	dest[i] = 0;
	return (dest);
}

void	doubletableau(char *str, char **tab)
{
	int i;
	int c;
	int a;

	i = 0;
	a = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n')
		i++;
	while (str[i])
	{
		c = 0;
		while (str[i] != '\n' && str[i])
		{
			i++;
			c++;
		}
		if (str[i] == '\n')
			tab[a++] = ft_strdup(str, i, c);
		i++;
	}
	tab[a] = 0;
}

char	**ft_get_map(char *str, int size)
{
	int		i;
	int		nb_lines;
	char	**tab;

	tab = NULL;
	nb_lines = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != 0 && str[i] == '\n')
		{
			nb_lines++;
		}
		i++;
	}
	if (nb_lines != (size + 1))
		return (tab);
	else
	{
		if (!(tab = malloc(sizeof(*tab) * (size + 1))))
			return (tab);
	}
	doubletableau(str, tab);
	return (tab);
}
