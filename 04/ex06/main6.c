/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main6.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 07:22:43 by mbeeler          ###   ########.fr       */
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

int		ft_is_prime(int nb);

int		main(void)
{
	printf("should show 0: %d\n", ft_is_prime(-5));
	printf("should show 0: %d\n", ft_is_prime(0));
	printf("should show 0: %d\n", ft_is_prime(1));
	printf("should show 1: %d\n", ft_is_prime(2));
	printf("should show 1: %d\n", ft_is_prime(3));
	printf("should show 0: %d\n", ft_is_prime(4));
	printf("should show 1: %d\n", ft_is_prime(5));
	printf("should show 0: %d\n", ft_is_prime(6));
	printf("should show 0: %d\n", ft_is_prime(15));
	printf("should show 0: %d\n", ft_is_prime(99));
	printf("should show 1: %d\n", ft_is_prime(113));
	return (0);
} 
