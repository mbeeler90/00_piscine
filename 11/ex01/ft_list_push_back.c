/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:38:03 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 13:44:57 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*end;

	end = *begin_list;
	if (end)
	{
		while (end->next)
			end = end->next;
		end->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
