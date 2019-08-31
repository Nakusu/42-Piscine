/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:27:21 by llepage           #+#    #+#             */
/*   Updated: 2019/08/31 22:07:44 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	editletter(char letter, int m)
{
	if (m == 0 && letter >= 97 && letter <= 122)
	{
		letter -= 32;
	}
	else if (m == 1 && letter >= 65 && letter <= 90)
	{
		letter += 32;
	}
	return (letter);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int m;

	i = 0;
	m = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = editletter(str[i], m);
			m = 1;
		}
		else if (str[i] == ' ')
		{
			m = 0;
		}
		i++;
	}
	return (str);
}
