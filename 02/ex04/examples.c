/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   examples.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:46:13 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/19 05:38:27 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char number);

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 48;
	j = 0;
	k = 2;
	while (i < 53)
	{
		ft_putchar(i);
		i++;
	}
	while (j < 5)
	{
		ft_putchar('0' + j);
		j++;
	}
}
