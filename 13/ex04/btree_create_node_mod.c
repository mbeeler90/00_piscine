/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 08:48:56 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/02 12:31:06 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node_mod(void *item, int i)
{
	t_btree		*tmp;

	tmp = (t_btree *)malloc(sizeof(t_btree));
	i--;
	if (tmp && i > 0)
	{
		tmp->item = item;
		tmp->left = btree_create_node_mod(item, i);
		tmp->right = btree_create_node_mod(item, i);
	}
	else
	{
		tmp->item = item;
		tmp->left = NULL;
		tmp->right = NULL;
	}
	return (tmp);
}
