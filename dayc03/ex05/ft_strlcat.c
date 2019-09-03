/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 14:58:05 by llepage           #+#    #+#             */
/*   Updated: 2019/09/03 18:43:08 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int				stringlength(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int s;
	unsigned int total;

	i = 0;
	s = 0;
	total = stringlength(dest) + stringlength(src);
	if (size == 0)
		return (stringlength(src));
	while (dest[i] && i < size)
		i++;
	while (src[s] && i < (size - 1))
	{
		dest[i] = src[s];
		i++;
		s++;
	}
	return (total);
}
