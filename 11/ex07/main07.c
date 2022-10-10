/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/01 05:29:21 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);

int		main(void)
{
	t_list		*list;
	t_list		*result;

	list = NULL;
	ft_list_push_front(&list, "string1");
	ft_list_push_front(&list, "string2");
	ft_list_push_front(&list, "string3");
	result = ft_list_at(list, 2);
	printf("%s\n", (char *)result->data);
	return (0);
}
