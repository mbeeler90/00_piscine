/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/22 07:21:06 by mbeeler          ###   ########.fr       */
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

int		ft_fibonacci(int index);

int		main(void)
{
	printf("should show -1: %d\n", ft_fibonacci(-2));
	printf("should show -1: %d\n", ft_fibonacci(-1));
	printf("should show 0: %d\n", ft_fibonacci(0));
	printf("should show 1: %d\n", ft_fibonacci(1));
	printf("should show 1: %d\n", ft_fibonacci(2));
	printf("should show 2: %d\n", ft_fibonacci(3));
	printf("should show 3: %d\n", ft_fibonacci(4));
	printf("should show 5: %d\n", ft_fibonacci(5));
	printf("should show 8: %d\n", ft_fibonacci(6));
	printf("should show 13: %d\n", ft_fibonacci(7));
	printf("should show 21: %d\n", ft_fibonacci(8));
	printf("should show 34: %d\n", ft_fibonacci(9));
	printf("should show 55: %d\n", ft_fibonacci(10));
	return (0);
} 
