/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:54:37 by llepage           #+#    #+#             */
/*   Updated: 2019/09/06 12:00:08 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	result = nb;
	i = 1;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		while (i < nb)
		{
			result *= power;
			i++;
		}
	return (result);
}
