/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:27:45 by llepage           #+#    #+#             */
/*   Updated: 2019/09/06 14:40:30 by llepage          ###   ########.fr       */
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

	i = 1;
	while (i <= (argc - 1))
	{
		write(1, argv[i], stringlength(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
