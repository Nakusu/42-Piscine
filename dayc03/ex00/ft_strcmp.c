/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:49:57 by llepage           #+#    #+#             */
/*   Updated: 2019/09/02 13:54:40 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		intchar(char letter)
{
	int		count;
	char	compare;

	compare = 0;
	count = 0;
	while (compare != letter)
	{
		compare++;
		count++;
	}
	return (count);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (s1[i])
	{
		if (intchar(s1[i]) != intchar(s2[i]))
			return (intchar(s1[i]) - intchar(s2[i]));
		i++;
	}
	while (s2[i])
	{
		result -= intchar(s2[i]);
		i++;
	}
	return (result);
}
