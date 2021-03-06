/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:11:03 by llepage           #+#    #+#             */
/*   Updated: 2019/09/05 13:55:55 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		editsigne(int nb, int signe)
{
	if ((signe % 2) == 1)
		return (-nb);
	return (nb);
}

int		type(char caract)
{
	int type;

	if (caract >= '0' && caract <= '9')
		type = 1;
	else if (caract == '\t' || caract == '\n')
		type = 2;
	else if (caract == '\v' || caract == '\f')
		type = 2;
	else if (caract == '\r' || caract == ' ')
		type = 2;
	else if (caract == '-' || caract == '+')
		type = 3;
	else
		type = 4;
	return (type);
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int signe;

	n = 0;
	signe = 0;
	i = 0;
	if (type(str[i]) == 4)
		return (n);
	while (type(str[i]) == 2)
		i++;
	while (type(str[i]) == 3)
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	while (type(str[i]) == 1)
	{
		n = (n * 10 + (str[i] - 48));
		i++;
	}
	return (editsigne(n, signe));
}
