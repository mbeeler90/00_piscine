/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/27 18:37:09 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

struct s_stock_par *ft_param_to_tab(int ac, char **av);

void ft_show_tab(struct s_stock_par *par);

int main(int argc, char **argv)
{
	ft_show_tab(ft_param_to_tab(argc, argv));
	return (0);
}