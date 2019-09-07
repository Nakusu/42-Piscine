/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:01:58 by llepage           #+#    #+#             */
/*   Updated: 2019/09/07 15:50:11 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		stringlength(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int		valascii(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;
	int		o;
	char	*temp;

	i = 1;
	o = 1;
	while (i < (argc - 1))
	{
		while (valascii(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
			i = 1;
		}
		i++;
	}
	while (argv[o])
	{
		write(1, argv[o], stringlength(argv[o]));
		write(1, "\n", 1);
		o++;
	}
}
