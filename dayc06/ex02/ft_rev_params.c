/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:43:32 by llepage           #+#    #+#             */
/*   Updated: 2019/09/06 14:57:52 by llepage          ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i >= 1)
	{
		write(1, argv[i], stringlength(argv[i]));
		write(1, "\n", 1);
		i--;
	}
}
