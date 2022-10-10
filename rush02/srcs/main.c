/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:18:03 by jturunen          #+#    #+#             */
/*   Updated: 2021/09/04 18:20:26 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utility.h"

int		main(void)
{
	char	*input;
	int		xyji[4];

	input = read_input();
	xyji[0] = get_x(input);
	xyji[1] = get_y(input);
	compare_rush(input, xyji, 0);
	ft_putchar('\n');
	return (0);
}
