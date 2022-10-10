/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:40:29 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 06:56:20 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"

void			second(int *i, t_sudoku *m, int *j, int *direction)
{
	int count;
	int count2;
	int k;

	count = 0;
	while (*j < m[*i].l_values && count == 0)
	{
		k = -1;
		count2 = 0;
		while (k++ < *i && count2 == 0)
			if (m[*i].x == m[k].x || m[*i].y == m[k].y || m[*i].sqr == m[k].sqr)
				if (m[k].o_value == 1)
					if (m[*i].p_values[*j] == m[k].cur_value)
						count2 = 1;
		if (count2 == 0)
		{
			m[*i].cur_value = m[*i].p_values[*j];
			count = 1;
			*direction = 1;
		}
		else
			*j = *j + 1;
	}
}

void			split(int *i, t_sudoku *m, int *p, int *direction)
{
	int j;

	j = 0;
	if (m[*i].cur_value != 0)
	{
		while (m[*i].cur_value != m[*i].p_values[j])
			j++;
		j++;
	}
	second(i, m, &j, direction);
	if (m[*i].p_values[j] == 0)
	{
		m[*i].cur_value = 0;
		*i = *i - 1;
		*direction = -1;
	}
	else
		*i = *i + 1;
	*p = j;
}

t_sudoku		*ft_search_number(t_sudoku *m)
{
	int		i;
	int		j;
	int		direction;

	i = 0;
	direction = 1;
	while (i < 81)
	{
		if (i == -1)
			return (NULL);
		else if (m[i].o_value == 0)
			i += direction;
		else
			split(&i, m, &j, &direction);
	}
	return (m);
}
