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

int		stringlenght(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int a;
	int size;

	size = stringlenght(argv[0]);
	a = argc;
	write(1, argv[0], size);
	write(1, "\n", 1);
}
