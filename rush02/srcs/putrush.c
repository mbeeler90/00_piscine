/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putrush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 10:22:48 by jturunen          #+#    #+#             */
/*   Updated: 2021/09/04 16:36:41 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utility.h"

void	putrush(char *file_name, int x, int y, int r_c)
{
	if (r_c > 0)
		ft_putstr(" || ");
	ft_putstr(file_name);
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}
