/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 10:38:39 by llepage           #+#    #+#             */
/*   Updated: 2019/09/03 14:54:24 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		stringlength(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int s;

	i = 0;
	s = 0;
	if (to_find[s] == 0)
		return (0);
	while (str[i])
	{
		if (to_find[s] == str[i] && s != stringlength(to_find))
		{
			if (to_find[s + 1] == 0)
				return (str + i - s);
			s++;
		}
		else if (s != stringlength(to_find))
		{
			s = 0;
		}
		i++;
	}
	return (str);
}
