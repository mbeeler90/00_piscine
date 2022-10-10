/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:07:06 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 05:13:02 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f) (int))
{
	int		i;
	int		*array;

	array = (int *)malloc(sizeof(array) * length);
	if (array == 0)
		return (0);
	i = -1;
	while (++i < length)
		array[i] = f(tab[i]);
	return (array);
}
