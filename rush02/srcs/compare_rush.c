/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:03:43 by jturunen          #+#    #+#             */
/*   Updated: 2021/09/04 18:19:52 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utility.h"

void	compare_rush(char *input, int *xyji, int r_c)
{
	if (rush(input, xyji, "o-o| |o-o") == 1)
		putrush("[rush-00] [", (xyji[0] - 1), xyji[1], r_c++);
	if (rush(input, xyji, "/*\\* *\\*/") == 1)
		putrush("[rush-01] [", (xyji[0] - 1), xyji[1], r_c++);
	if (rush(input, xyji, "ABAB BCBC") == 1)
		putrush("[rush-02] [", (xyji[0] - 1), xyji[1], r_c++);
	if (rush(input, xyji, "ABCB BABC") == 1)
		putrush("[rush-03] [", (xyji[0] - 1), xyji[1], r_c++);
	if (rush(input, xyji, "ABCB BCBA") == 1)
		putrush("[rush-04] [", (xyji[0] - 1), xyji[1], r_c++);
	if (square(input, xyji) == 1)
	{
		putrush("[rectangle] [", (xyji[0] - 1), xyji[1], r_c++);
		if ((xyji[0] - 1) == xyji[1])
			putrush("[square] [", (xyji[0] - 1), xyji[1], r_c++);
	}
	if (rev_square(input, xyji) == 1)
	{
		putrush("[reverted rectangle] [", (xyji[0] - 1), xyji[1], r_c++);
		if ((xyji[0] - 1) == xyji[1])
			putrush("[reverted square] [", (xyji[0] - 1), xyji[1], r_c++);
	}
	if (r_c == 0)
		ft_putstr("Your input is faulty, you dummy!");
}
