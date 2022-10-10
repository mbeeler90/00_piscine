/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/24 11:48:38 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char	haystack[] = "This is a test!";
	char	needle1[] = "es";
	char	needle2[] = "is";
	char	needle3[] = "aq";
	char	needle4[] = "";

	printf("%s\n", ft_strstr(haystack, needle1));
	printf("%s\n", strstr(haystack, needle1));
	
	printf("%s\n", ft_strstr(haystack, needle2));
	printf("%s\n", strstr(haystack, needle2));

	printf("%s\n", ft_strstr(haystack, needle3));
	printf("%s\n", strstr(haystack, needle3));

	printf("%s\n", ft_strstr(haystack, needle4));
	printf("%s\n", strstr(haystack, needle4));

	return (0);
} 
