/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/25 07:36:10 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
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

int		ft_atoi(char *str);

int		main(void)
{
	printf("should print %d: %d\n", atoi("2147483648"), ft_atoi("2147483647"));
	printf("should print %d: %d\n", atoi("  f  -1234"), ft_atoi("  f  -1234"));
	printf("should print %d: %d\n", atoi("-+1234"), ft_atoi("-+1234"));
	printf("should print %d: %d\n", atoi("1 2    1234"), ft_atoi("1 2    1234"));
	printf("should print %d: %d\n", atoi("    -12kk34"), ft_atoi("    -12kk34"));
	printf("should print %d: %d\n", atoi("+1234kk"), ft_atoi("+1234kk"));
	printf("should print %d: %d\n", atoi("    +1234"), ft_atoi("    +1234"));
	printf("should print %d: %d\n", atoi(" \f \n \r \t \v  1234"), ft_atoi(" \f \n \r \t \v   1234"));
	return (0);
} 
