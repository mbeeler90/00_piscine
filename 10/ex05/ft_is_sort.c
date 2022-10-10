/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:10:03 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 18:46:31 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int		i;
	int		direction;

	direction = 0;
	i = -1;
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0 && direction >= 0)
			direction = 1;
		else if (f(tab[i], tab[i + 1]) < 0 && direction <= 0)
			direction = -1;
		else if (direction != 0)
			return (0);
	}
	return (1);
}
