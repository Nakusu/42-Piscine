/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:44:45 by llepage           #+#    #+#             */
/*   Updated: 2019/09/18 23:36:35 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	conversion(char *s1, int *s2, t_first_line info)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == info.empty)
			s2[i] = 1;
		else
			s2[i] = 0;
		i++;
	}
}

int		**arrayconv(t_first_line info, char **array)
{
	int i;
	int s;
	int **conv;

	i = 0;
	conv = malloc(sizeof(conv) * info.size);
	while (array[i])
	{
		s = 0;
		while (array[i][s])
		{
			if (array[i][s + 1] == '\0')
			{
				conv[i] = malloc(sizeof(int) * (s + 1));
				conversion(array[i], conv[i], info);
			}
			s++;
		}
		i++;
	}
	return (conv);
}

void	init(char *name)
{
	t_first_line	info;
	t_pos_square	solu;
	char			*str;
	char			**stock;
	int				**trait;

	str = readfile(name, 1);
	if (str == NULL)
		ft_putstr("map error\n");
	else
	{
		info = ft_get_info(str);
		stock = ft_get_map(str, info.size);
		if (info.size != 0 && linesize(stock) != -1
		&& arrayverif(info, stock) == 1)
		{
			trait = arrayconv(info, stock);
			solu = find_square(len_square(trait, info.size, linesize(stock)),
			info.size, linesize(stock));
			setresult(stock, solu);
			printarray(stock);
			free(stock);
			free(str);
		}
		else
			ft_putstr("Error\n");
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 2)
		init(argv[1]);
	else if (argc > 2)
	{
		while (argv[i])
		{
			init(argv[i]);
			i++;
		}
	}
}
