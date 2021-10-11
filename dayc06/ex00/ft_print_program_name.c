/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:10:48 by llepage           #+#    #+#             */
/*   Updated: 2019/09/07 17:11:25 by llepage          ###   ########.fr       */
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
	write(1, argv[0], strlen(argv[0]));
	write(1, "\n", 1);
}
