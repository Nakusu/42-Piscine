/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:55:10 by llepage           #+#    #+#             */
/*   Updated: 2019/09/12 21:27:37 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						slength(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	copy = NULL;
	if((copy = malloc(sizeof(*copy) * (slength(src) + 1))) == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = NULL;
	if((tab = malloc(sizeof(*tab) * (ac + 1))) == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = slength(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
