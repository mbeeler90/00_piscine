/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelbeeler <manuelbeeler@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/11/02 09:58:29 by manuelbeele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
 
int		main(void)
{
	char	*array[] = {"11", "12", "13", "23", "111", "214", "33", "87654", (char*)0};
	char	*new_ar[] = {"1", "2", "3", "12456654", (char*)0};

	printf("should print 4: %d\n", ft_count_if(array, &ft_addnbr));
	printf("should print 2: %d\n", ft_count_if(new_ar, &ft_addnbr));
	return (0);
}
