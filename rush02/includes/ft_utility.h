/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utility.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpikkuma <jpikkuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:47:06 by jturunen          #+#    #+#             */
/*   Updated: 2021/09/05 12:11:08 by jpikkuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILITY_H
# define FT_UTILITY_H

# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					rush(char *string, int *xyji, char *symbol);
int					get_x(char *string);
int					get_y(char *string);
int					check_lines(char c, int *xyji, char *symbol, int k);
void				putrush(char *file_name, int x, int y, int r_c);
void				compare_rush(char *input, int *xyji, int r_c);
char				*read_input(void);
int					square(char *string, int *xyji);
int					rev_square(char *string, int *xyji);

#endif
