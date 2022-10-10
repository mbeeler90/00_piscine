/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/02 17:23:03 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree		*btree_create_node_mod(void	*item, int i);
void    	ft_addnbr(void *item);

int		main(void)
{
	t_btree		*head;
	t_btree		*parent_left;
	t_btree		*parent_right;
	t_btree		*c1;
	t_btree		*c2;
	t_btree		*c3;
	t_btree		*c4;
	int			i;
	int			j[] = {2, 3, 4, 5, 6, 7};

	i = 1;
	head = btree_create_node_mod(&i, 3);
	printf("   %d   \n", *((int*)head->item));
	parent_left = head->left;
	parent_left->item = &j[0];
	parent_right = head->right;
	parent_right->item = &j[1];
	printf(" %d   %d \n", *((int*)parent_left->item), *((int*)parent_right->item));
	c1 = parent_left->left;
	c1->item = &j[2];
	c2 = parent_left->right;
	c2->item = &j[3];
	c3 = parent_right->left;
	c3->item = &j[4];
	c4 = parent_right->right;
	c4->item = &j[5];
	printf("%d %d %d %d\n", *((int*)c1->item), *((int*)c2->item), *((int*)c3->item), *((int*)c4->item));
	
	btree_apply_infix(head, &ft_addnbr);
	return (0);
}
