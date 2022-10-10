/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:49:06 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/27 12:48:39 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*num;
	int		i;

	i = 0;
	if (min < max)
		num = (int*)malloc(sizeof(*num) * (max - min)); 
		num = 0;
	while (i < max - min && num != 0)
	{
		num[i] = min + i;
		i++;
	}
	return (num);
}
