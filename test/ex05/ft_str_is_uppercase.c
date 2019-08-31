/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:30:48 by llepage           #+#    #+#             */
/*   Updated: 2019/08/31 18:42:40 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	if (*str == 0)
		return (1);
	while (*str > 0)
	{
		if (*str >= 65 && *str <= 90)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
