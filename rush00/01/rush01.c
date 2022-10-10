/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jturunen <jturunen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:36:54 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 08:41:12 by jturunen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c, int i);

void	ft_putline(char c, char d, char e, int x)
{
	ft_putchar(c, 1);
	if (x >= 3)
	{
		while (x > 2)
		{
			ft_putchar(d, 1);
			x--;
		}
	}
	if (x >= 2)
		ft_putchar(e, 1);
	ft_putchar('\n', 1);
}

int		rush01(int x, int y)
{
	if (y <= 0 || x <= 0)
		return (0);
	ft_putline('/', '*', '\\', x);
	while (y > 2)
	{
		ft_putline('*', ' ', '*', x);
		y--;
	}
	if (y >= 2)
		ft_putline('\\', '*', '/', x);
	return (0);
}
