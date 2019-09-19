/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:55:26 by llepage           #+#    #+#             */
/*   Updated: 2019/09/12 15:07:54 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int iter;

	iter = 0;
	while (str[iter])
		iter++;
	return (iter);
}

int		ft_addsep(char **str, char *sep, int pos)
{
	int iter;

	iter = 0;
	while (sep[iter])
	{
		str[0][pos] = sep[iter];
		pos++;
		iter++;
	}
	return (pos);
}

int		ft_addstr(char **str, char **strs, int pos_str, int pos_strs)
{
	int iter;

	iter = 0;
	while (strs[pos_strs][iter])
	{
		str[0][pos_str] = strs[pos_strs][iter];
		iter++;
		pos_str++;
	}
	return (pos_str);
}

int		ft_initstr(char **str, int size, char **strs, char *sep)
{
	int tot_size;
	int i;
	int j;

	i = 0;
	tot_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tot_size++;
			j++;
		}
		i++;
	}
	tot_size += ft_strlen(sep) * (size - 1) + 1;
	if (size <= 0)
	{
		*str = malloc(sizeof(*str));
		tot_size = 0;
	}
	else
		*str = malloc(sizeof(*str) * tot_size);
	return (tot_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		iter;
	int		count;

	if (ft_initstr(&res, size, strs, sep) == 0)
	{
		res[0] = 0;
		return (res);
	}
	iter = 0;
	count = 0;
	while (count < size)
	{
		iter = ft_addstr(&res, strs, iter, count);
		if (count < size - 1)
			iter = ft_addsep(&res, sep, iter);
		count++;
	}
	res[iter] = 0;
	return (res);
}
