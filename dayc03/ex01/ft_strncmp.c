/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 15:15:56 by llepage           #+#    #+#             */
/*   Updated: 2019/09/02 15:38:14 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		intchar(char letter)
{
	int		count;
	char	compare;

	count = 0;
	compare = 0;
	while (compare != letter)
	{
		compare++;
		count++;
	}
	return (count);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != intchar(s2[i]))
			return (intchar(s1[i]) - intchar(s2[i]));
		i++;
	}
	return (0);
}
