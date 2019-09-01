/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 20:27:21 by llepage           #+#    #+#             */
/*   Updated: 2019/09/01 14:17:25 by llepage          ###   ########.fr       */
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
		else if (str[i] == ' ' || !(str[i] >= 49 && str[i] <= 57))
		{
			if (!((str[i] >= 65 && str[i] <= 90)))
				if (!(str[i] >= 97 && str[i] <= 122))
					m = 0;
		}
		i++;
	}
	return (str);
}
