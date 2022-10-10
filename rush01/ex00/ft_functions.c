/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:56:58 by joivanau          #+#    #+#             */
/*   Updated: 2021/08/29 13:04:44 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

int			ft_chstrch(char *str)
{
	int		i;
	int		len;
	char	d;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		d = str[i];
		if ((d < '1' || '9' < d) && d != '.')
		{
			return (0);
		}
		if (d == '.')
		{
			str[i] = '0';
		}
		i = i + 1;
	}
	return (1);
}

void		ft_set(char **argv, t_sudoku *m, int *k)
{
	int j;
	int i;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			m[*k].x = i;
			m[*k].y = j;
			m[*k].sqr = m[*k].x / 3 + 3 * (m[*k].y / 3) + 1;
			if (argv[i + 1][j] == '0')
				m[*k].o_value = 1;
			else
				m[*k].o_value = 0;
			if (argv[i + 1][j] == '0')
				m[*k].cur_value = 0;
			else
				m[*k].cur_value = argv[i + 1][j] - '0';
			m[*k].position = *k;
			*k = *k + 1;
		}
	}
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i = i + 1;
	}
}
