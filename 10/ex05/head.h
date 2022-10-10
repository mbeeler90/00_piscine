/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:04 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 18:17:58 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c);
int    ft_addnbr(int n1, int n2);
int		ft_is_sort(int *tab, int length, int (*f) (int, int));

#endif