/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:55:19 by llepage           #+#    #+#             */
/*   Updated: 2019/09/11 16:52:12 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		stringlength(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	copy = malloc(stringlength(src) * sizeof(char));
	i = 0;
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (src[i])
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
