/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/23 05:27:30 by mbeeler          ###   ########.fr       */
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

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int		number;
	
	number = -9999;

	number = ft_iterative_factorial(-1);
	if (number == 0)
		printf("Test -1 OK: %d\n", number);
	else
		printf("Test -1 FAILED: Should show 0, showed %d\n", number);
	number = -9999;
		
	number = ft_iterative_factorial(0);
	if (number == 1)
		printf("Test 0 OK: %d\n", number);
	else
		printf("Test 0 FAILED: should show 1, showed %d\n", number);
	number = -9999;
	
	number = ft_iterative_factorial(1);
	if (number == 1)
		printf("Test 1 OK: %d\n", number);
	else
		printf("Test 1 FAILED: should show 1, showed %d\n", number);
	number = -9999;
	
	number = ft_iterative_factorial(5);
	if (number == 120)
		printf("Test 5 OK: %d\n", number);
	else
		printf("Test 5 FAILED: should show 120, showed %d\n", number);
	number = -9999;
	
	number = ft_iterative_factorial(10);
	if (number == 3628800)
		printf("Test 10 OK: %d\n", number);
	else
		printf("Test 10 FAILED: should show 3628800, showed %d\n", number);
	number = -9999;
	
	number = ft_iterative_factorial(13);
	if (number == 0)
		printf("Test 13 OK: %d\n", number);
	else
		printf("Test 13 FAILED: should show 0, showed %d\n", number);
	
	return (0);
} 
