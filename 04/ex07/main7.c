/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 07:24:43 by mbeeler          ###   ########.fr       */
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

int		ft_find_next_prime(int nb);

int		main(void)
{
	printf("should show 2: %d\n", ft_find_next_prime(-3));
	printf("should show 2: %d\n", ft_find_next_prime(0));
	printf("should show 2: %d\n", ft_find_next_prime(1));
	printf("should show 2: %d\n", ft_find_next_prime(2));
	printf("should show 3: %d\n", ft_find_next_prime(3));
	printf("should show 5: %d\n", ft_find_next_prime(4));
	printf("should show 5: %d\n", ft_find_next_prime(5));
	printf("should show 7: %d\n", ft_find_next_prime(6));
	printf("should show 7: %d\n", ft_find_next_prime(7));
	printf("should show 11: %d\n", ft_find_next_prime(9));
	printf("should show 101: %d\n", ft_find_next_prime(99));
	printf("should show 251: %d\n", ft_find_next_prime(250));
	printf("should show 1009: %d\n", ft_find_next_prime(1000));
	return (0);
} 
