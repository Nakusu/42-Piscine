/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 09:45:33 by llepage           #+#    #+#             */
/*   Updated: 2019/09/19 18:12:02 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (tab[i] && i < length)
	{
		if ((*f)(tab[i]))
			result++;
		i++;
	}
	return (result);
}
