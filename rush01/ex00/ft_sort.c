/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joivanau <joivanau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 11:13:23 by hturunen          #+#    #+#             */
/*   Updated: 2021/08/29 10:19:03 by joivanau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_c(t_sudoku *a, t_sudoku *c)
{
	c->x = a->x;
	c->y = a->y;
	c->sqr = a->sqr;
	c->o_value = a->o_value;
	c->cur_value = a->cur_value;
	c->p_values = a->p_values;
	c->l_values = a->l_values;
	c->position = a->position;
}

void	ft_swap(t_sudoku *a, t_sudoku *b)
{
	t_sudoku		c;

	ft_c(a, &c);
	a->x = b->x;
	a->y = b->y;
	a->sqr = b->sqr;
	a->o_value = b->o_value;
	a->cur_value = b->cur_value;
	a->p_values = b->p_values;
	a->l_values = b->l_values;
	a->position = b->position;
	b->x = c.x;
	b->y = c.y;
	b->sqr = c.sqr;
	b->o_value = c.o_value;
	b->cur_value = c.cur_value;
	b->p_values = c.p_values;
	b->l_values = c.l_values;
	b->position = c.position;
}

void	ft_sort(int size, t_sudoku *ar, int button, int i)
{
	int		pivot;
	int		j;

	pivot = 0;
	j = size;
	if (j > 1)
	{
		while (i < j)
		{
			if ((button == 1 && ar[pivot].l_values >= ar[i].l_values) ||
			(button == 2 && ar[pivot].position >= ar[i].position))
			{
				ft_swap((ar + pivot), (ar + i));
				pivot = i++;
			}
			else
			{
				ft_swap((ar + i), (ar + j - 1));
				j = j - 1;
			}
		}
		ft_sort(pivot, ar, button, 1);
		ft_sort(size - pivot - 1, (ar + pivot + 1), button, 1);
	}
}
