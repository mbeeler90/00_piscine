/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 07:12:59 by mbeeler          ###   ########.fr       */
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

int		ft_recursive_factorial(int nb);

int		main(void)
{
	printf("should show 0: %d\n", ft_recursive_factorial(-1));
	printf("should show 0: %d\n", ft_recursive_factorial(0));
	printf("should show 1: %d\n", ft_recursive_factorial(1));
	printf("should show 2: %d\n", ft_recursive_factorial(2));
	printf("should show 6: %d\n", ft_recursive_factorial(3));
	printf("should show 120: %d\n", ft_recursive_factorial(5));
	printf("should show 362880: %d\n", ft_recursive_factorial(10));
	printf("should show 0: %d\n", ft_recursive_factorial(13));
	return (0);
} 
