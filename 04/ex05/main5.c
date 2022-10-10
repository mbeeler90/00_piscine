/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/21 18:13:43 by mbeeler          ###   ########.fr       */
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

int		ft_sqrt(int nb);

int		main(void)
{
	printf("should print 0 - %d\n", ft_sqrt(-2));
	printf("should print 0 - %d\n", ft_sqrt(0));
	printf("should print 1 - %d\n", ft_sqrt(1));
	printf("should print 0 - %d\n", ft_sqrt(2));
	printf("should print 2 - %d\n", ft_sqrt(4));
	printf("should print 0 - %d\n", ft_sqrt(5));
	printf("should print 3 - %d\n", ft_sqrt(9));
	printf("should print 0 - %d\n", ft_sqrt(12));
	printf("should print 40 - %d\n", ft_sqrt(1600));
	printf("should print 40000 - %d\n", ft_sqrt(1600000000));
	return (0);
} 
