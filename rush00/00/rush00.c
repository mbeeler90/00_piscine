/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:36:54 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 07:50:02 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int i);

void	ft_putline(char c, char d, int x)
{
	ft_putchar(c, 1);
	while (x > 2)
	{
		ft_putchar(d, 1);
		x--;
	}
	if (x >= 2)
		ft_putchar(c, 1);
	ft_putchar('\n', 1);
}

int		rush00(int x, int y)
{
	if (y <= 0 || x <= 0)
		return (0);
	ft_putline('o', '-', x);
	while (y > 2)
	{
		ft_putline('|', ' ', x);
		y--;
	}
	if (y >= 2)
		ft_putline('o', '-', x);
	return (0);
}
