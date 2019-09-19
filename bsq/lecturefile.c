/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecturefile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgonfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:29:34 by jgonfroy          #+#    #+#             */
/*   Updated: 2019/09/18 23:41:09 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		sizefile(char *name)
{
	int 	i;
	int 	fd;
	char 	caract[4096];

	i = 0;
	fd = open(name, O_RDONLY);
	while (read(fd, caract, 4096) != 0)
		i += 4096;
	close(fd);
	return (i);
}

char	*lecture(char *name, int fd)
{
	long int 	i;
	char 		*content;
	char 		caract;

	i = 0;
	content = NULL;
	if (!(content = malloc(sizeof(char) * (sizefile(name) + 1))))
		return (content);
	while (read(fd, &caract, 1) != 0)
	{
		if (i == 0 && !(caract >= '0' && caract <= '9'))
			return (content);
		content[i] = caract;
		i++;
	}
	content[i] = 0;
	return (content);
}

char	*readfile(char *name, int type)
{
	int 	fd;
	char 	*content;

	content = NULL;
	if (type == 1)
	{
		if ((fd = open(name, O_RDONLY)) == -1)
			return (content);
		else
		{
			content = lecture(name, fd);
			if (content == NULL)
				return (content);
			close(fd);
		}
	}
	else
	{
		content = lecture(name, 0);
		if (content == NULL)
			return (content);
	}
	return (content);
}

void	printarray(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		ft_putstr(array[i]);
		ft_putchar('\n');
		i++;
	}
}

int		linesize(char **array)
{
	int i;
	int s;
	int size;

	i = 0;
	size = 0;
	while (array[i])
	{
		s = 0;
		while (array[i][s])
		{
			if (array[i][s + 1] == 0)
			{
				if (size == 0)
					size = s;
				else if (size != s)
					return (-1);
			}
			s++;
		}
		i++;
	}
	return (size + 1);
}
