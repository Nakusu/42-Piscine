/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:17:11 by llepage           #+#    #+#             */
/*   Updated: 2019/09/06 14:10:21 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprime(nb)
{
	long i;

	i = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1
		return (0)
	else if (nb == 2)
		return (1);
	else
		while (i <= (nb / i))
		{
			if ((nb % i) == 0)
				return (0);
			i++;
		}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_isprime(nb) == 0)
		nb++;
	return (nb);
}
