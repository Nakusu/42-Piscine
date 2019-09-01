/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 10:16:39 by llepage           #+#    #+#             */
/*   Updated: 2019/09/01 12:42:07 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				findlenght(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int unsigned		i;
	int					lenght;
	char				*destsave;
	char				*srcsave;

	destsave = dest;
	srcsave = src;
	i = 0;
	while (src[i] && i < (size--))
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = 0;
		i++;
	}
	if (destsave < srcsave)
		lenght = findlenght(srcsave);
	else if (destsave == srcsave)
		lenght = size;
	else
		lenght = findlenght(srcsave);
	return (lenght);
}
