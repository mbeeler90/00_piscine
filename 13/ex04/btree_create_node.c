/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 08:48:56 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/02 10:01:40 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree		*tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->item = item;
		tmp->left = NULL;
		tmp->right = NULL;
	}
	return (tmp);
}
