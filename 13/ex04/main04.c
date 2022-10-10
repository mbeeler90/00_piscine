/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:11:11 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/03 12:29:00 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree		*btree_create_node_mod(void	*item, int i);
void    	ft_addnbr(void *item);
void		btree_apply_prefix(t_btree *root, void (*applyf)(void *));
int			ft_strcmp(void *s1, void *s2);

int		main(void)
{
	t_btree		*head = NULL;
	int 		i;
	int			array[] = {20, 12, 45, 23, 6, 17, 88};

	i = 0;
	while (i < 7) {
		btree_insert_data(&head, &array[i], &ft_strcmp);
		i++;
	}
	printf("       %d      \n", *((int*)head->item));
	printf("  %d       %d  \n", 12, 45);
	printf("%d   %d   %d   %d\n", 6, 17, 23, 88);
	btree_apply_prefix(head, &ft_addnbr);
	return (0);
}
