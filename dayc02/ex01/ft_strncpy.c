/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 16:20:39 by llepage           #+#    #+#             */
/*   Updated: 2019/09/01 14:45:10 by llepage          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*copy;
	int		count;

	if (dest == NULL)
		return (NULL);
	count = 0;
	while (src[count] > 0 && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (dest[count])
	{
		dest[n] = 0;
	}
	dest[n] = 0;
	return (dest);
}
