/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:20:05 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/27 18:51:32 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

char				**ft_split_whitespaces(char *str);

char				*add_string(char *av_str, int len)
{
	char	*string;
	int		i;

	i = 0;
	string = (char*)malloc(sizeof(char) * (len + 1));
	if (string == 0)
		return (string);
	while (av_str[i] != '\0')
	{
		string[i] = av_str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;
	int				j;

	i = 0;
	stock = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (stock == 0)
		return (stock);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		stock[i].size_param = j;
		stock[i].str = av[i];
		stock[i].copy = add_string(av[i], j);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
