/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:08:02 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 17:15:24 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*new;
	int		i;

	i = 0;
	list = ft_create_elem(av[0]);
	if (!list)
		return (list);
	while (++i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = list;
		list = new;
	}
	return (list);
}
