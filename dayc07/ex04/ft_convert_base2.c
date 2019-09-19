/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:53:07 by llepage           #+#    #+#             */
/*   Updated: 2019/09/18 10:49:56 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		slgth(char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int		in_base(char *base, char caract)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == caract)
			return (i);
		i++;
	}
	return (-1);
}

int		carray(char *array)
{
	int i;
	int p;

	i = 0;
	p = 1;
	while (array[i])
	{
		while (array[p])
		{
			if (array[p] == array[i])
			{
				return (1);
			}
			p++;
		}
		i++;
		p = i + 1;
	}
	return (0);
}

int		checkbase(char *base)
{
	int i;

	i = 0;
	if (slgth(base) < 2 || carray(base) == 1)
	{
		return (1);
	}
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\t' ||
			base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r')
			return (1);
		i++;
	}
	return (0);
}
