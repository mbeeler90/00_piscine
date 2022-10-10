/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:57:06 by joivanau          #+#    #+#             */
/*   Updated: 2021/08/30 06:59:15 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

int			ft_strlen(char *str);
int			ft_chstrch(char *str);
t_sudoku	*ft_setmatrix(char **argv, const int size);
void		ft_print_matrix(t_sudoku *m, int size);
void		ft_sort(int size, t_sudoku *ar, int button, int i);
t_sudoku	*ft_search_number(t_sudoku *m);
void		check(t_sudoku *m, int j, int i, int *p);
void		ft_set(char **argv, t_sudoku *m, int *k);
void		ft_putchar(char c);
void		ft_putstr(char *str);
t_sudoku	*ft_to_matrix(int argc, char **argv, const int size);
#endif
