/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tomatrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 21:51:57 by hturunen          #+#    #+#             */
/*   Updated: 2021/08/30 06:55:31 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"
#include "prototypes.h"

t_sudoku	*ft_to_matrix(int argc, char **argv, const int size)
{
	t_sudoku	*m;
	int			i;

	i = 1;
	m = NULL;
	if ((argc - 1) == size)
	{
		while (i <= size)
		{
			if (ft_strlen(argv[i]) != size || ft_chstrch(argv[i]) == 0)
			{
				return (NULL);
			}
			i = i + 1;
		}
		m = ft_setmatrix(argv, size);
	}
	else
		return (NULL);
	return (m);
}

void		function(t_sudoku *m, int *array, int k)
{
	int			i;
	int			j;
	int			len;
	int			count;

	i = 1;
	len = 0;
	while (i < 10)
	{
		count = 0;
		j = -1;
		while (++j < 81)
			if (m[k].x == m[j].x || m[k].y == m[j].y || m[k].sqr == m[j].sqr)
				if (m[j].cur_value == i)
					count += 1;
		if (count == 0)
			array[len++] = i;
		i++;
	}
}

int			*get_pvalues(t_sudoku *m, int k)
{
	int			i;
	int			j;
	int			len;
	int			*array;
	int			count;

	len = 0;
	i = 0;
	if (m[k].cur_value != 0)
		return (NULL);
	while (++i < 10)
	{
		count = 0;
		j = -1;
		while (++j < 81)
			if (m[k].x == m[j].x || m[k].y == m[j].y || m[k].sqr == m[j].sqr)
				if (m[j].cur_value == i)
					count += 1;
		if (count == 0)
			len += 1;
	}
	m[k].l_values = len;
	array = (int*)malloc(sizeof(*array) * (len + 1));
	function(m, array, k);
	return (array);
}

t_sudoku	*ft_setmatrix(char **argv, const int size)
{
	t_sudoku	*m;
	int			solution[81];
	int			i;
	int			k;

	m = malloc(sizeof(t_sudoku) * (size * size + 1));
	k = 0;
	ft_set(argv, m, &k);
	k = -1;
	while (++k < 81)
		m[k].p_values = get_pvalues(m, k);
	ft_sort(81, m, 1, 1);
	if (ft_search_number(m) == NULL)
		return (NULL);
	i = 0;
	while (i++ < 81)
		solution[i] = m[i].cur_value;
	m[80].cur_value++;
	if (ft_search_number(m) != NULL)
		return (NULL);
	i = 0;
	while (i++ < 81)
		m[i].cur_value = solution[i];
	ft_sort(81, m, 2, 1);
	return (m);
}

void		ft_print_matrix(t_sudoku *m, int size)
{
	int		i;

	size = 1;
	i = 0;
	while (i < 81)
	{
		ft_putchar('0' + m[i].cur_value);
		if ((i + 1) % 9 != 0)
			ft_putchar(' ');
		else
			ft_putchar('\n');
		i = i + 1;
	}
}
