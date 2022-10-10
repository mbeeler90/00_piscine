/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 17:42:01 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	t_list		*list;

	list = NULL;
	ft_list_push_front(&list, "string1");
	ft_list_push_front(&list, "");
	ft_list_push_front(&list, "string3");
	if (list)
		printf("list is not empty\n");
	ft_list_clear(&list);
	if (!list)
		printf("list is empty\n");

	return (0);
}
