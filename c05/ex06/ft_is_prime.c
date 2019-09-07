/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:07:56 by llepage           #+#    #+#             */
/*   Updated: 2019/09/06 13:16:43 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long i;

	i = 3;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb == 4)
		return (0);
	else if (nb < 0)
		return (0);
	while (i < (nb / i - 1))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
