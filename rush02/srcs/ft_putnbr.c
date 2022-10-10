/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:18:28 by jturunen          #+#    #+#             */
/*   Updated: 2021/09/04 10:18:34 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utility.h"

void	ft_putnbr(int nb)
{
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	else if (nb < 0)
		ft_putchar('-');
	if (nb < 0)
		ft_putchar(((nb % 10) * -1) + '0');
	else
		ft_putchar((nb % 10) + '0');
}
