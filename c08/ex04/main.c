/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdruez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:52:08 by bdruez            #+#    #+#             */
/*   Updated: 2019/09/12 21:10:57 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int argc, char **argv)
{
	int iter = 0;
	t_stock_str *tab;

	tab = ft_strs_to_tab(argc, argv);
	while (tab[iter].str)
	{
		tab[iter].copy[0] = 'L';
		printf("Iteration : %d\n", iter);
		printf("\tSize : %d\n", tab[iter].size);
		printf("\tStr : %s\n", tab[iter].str);
		printf("\tCopy : %s\n", tab[iter].copy);
		printf("\n");
		iter++;
	}
	return (0);
}
