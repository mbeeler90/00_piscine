/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:46:13 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/18 19:08:33 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char character);

void	ft_is_negative(int n)
{
	char	result;

	result = 'P';
	if (n < 0)
	{
		result = 'N';
	}
	ft_putchar(result);
}
