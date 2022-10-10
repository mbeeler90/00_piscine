/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:45:28 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/26 05:24:30 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*num;

	i = 0;
	if (min < max)
		num = (int*)malloc(sizeof(num) * (max - min));
	else
		num = 0;
	if (num == 0)
	{
		*range = 0;
		return (0);
	}
	while (i < max - min)
	{
		num[i] = min + i;
		i++;
	}
	*range = num;
	return (i);
}
