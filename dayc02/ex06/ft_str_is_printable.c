/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 18:50:03 by llepage           #+#    #+#             */
/*   Updated: 2019/08/31 19:05:18 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	if (*str == 0)
		return (1);
	while (*str > 0)
	{
		if (*str > 32 && *str < 127)
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
