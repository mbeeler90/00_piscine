/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 07:18:48 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char character)
{
	write (1, &character, 1);
	return (0);
}

int		ft_putnbr(int num)
{
	printf ("%d\n", num);
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	printf("should show 243: %d\n", ft_iterative_power(3, 5));
	printf("should show 0: %d\n", ft_iterative_power(2, -5));
	printf("should show 1: %d\n", ft_iterative_power(6, 0));
	printf("should show 4: %d\n", ft_iterative_power(4, 1));
	printf("should show -64: %d\n", ft_iterative_power(-4, 3));
	printf("should show 4782969: %d\n", ft_iterative_power(3, 14));
	return (0);
} 
