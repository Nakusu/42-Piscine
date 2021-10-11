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

int		strlen(char *string)
{
	int i;

	i = 0;
	while (string[i++])
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		write(1, argv[i], strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
