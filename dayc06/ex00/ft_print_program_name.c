/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:10:48 by llepage           #+#    #+#             */
/*   Updated: 2019/09/06 14:18:48 by llepage          ###   ########.fr       */
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

int		main(int arc, char **argv)
{
	int size = stringlenght(argv[0]);
	write(1, argv[0], size);
}
