/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llepage <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 10:53:41 by llepage           #+#    #+#             */
/*   Updated: 2019/09/18 23:22:57 by jgonfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct 	s_first_line
{
	int		size;
	char	empty;
	char	obstacle;
	char	full;
}				t_first_line;

typedef struct   pos_square
{
	int valeur;
	int i;
	int j;
}               t_pos_square;

int				putnbr();
void			ft_putstr(char *array);
void			ft_putchar(char caract);
int				sizefile(char *name);
char			*lecture(char *name, int fd);
char			*readfile(char *name, int type);
void			printarray(char **array);
int				linesize(char	**array);
void			conversion(char *s1, int *s2, t_first_line info);
int				**arrayconv(t_first_line info, char **array);
char			**ft_get_map(char *str, int size);
t_first_line	ft_get_info(char* str);
t_first_line	initialisation_first_line();
t_first_line	remplir_first_line();
int				stringlgth(char *str);
int				arrayverif(t_first_line info, char **array);
int				**len_square();
void			setresult(char **stock, t_pos_square solution);
t_pos_square	find_square();

#endif
