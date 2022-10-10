/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:04 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 16:43:42 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c);
int	    ft_addnbr(char *number);
int		ft_count_if(char **tab, int (*f) (char*));

#endif