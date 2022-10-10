/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 21:52:02 by hturunen          #+#    #+#             */
/*   Updated: 2021/08/30 06:56:56 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudoku.h"
#include "prototypes.h"

#define M_SIZE 9

int			main(int argc, char **argv)
{
	t_sudoku	*m;

	m = ft_to_matrix(argc, argv, M_SIZE);
	if (m != NULL)
		ft_print_matrix(m, M_SIZE);
	else
	{
		ft_putstr("Error");
		ft_putchar('\n');
	}
	return (0);
}
