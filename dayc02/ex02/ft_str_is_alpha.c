/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 17:43:21 by llepage           #+#    #+#             */
/*   Updated: 2019/08/31 18:05:46 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	if (*str == 0)
		return (1);
	while (*str > 0)
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
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
