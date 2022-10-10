/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 15:20:33 by jturunen          #+#    #+#             */
/*   Updated: 2021/09/06 09:27:42 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utility.h"

t_list	*ft_create_elem(char c)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = c;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_list_push_back(t_list **list, char c)
{
	t_list *elem;

	elem = *list;
	if (elem)
	{
		while (elem->next)
			elem = elem->next;
		elem->next = ft_create_elem(c);
	}
	else
		*list = ft_create_elem(c);
}

void	ft_list_clear(t_list **list)
{
	t_list	*temp;

	if (!*list)
		return ;
	while (*list)
	{
		temp = *list;
		*list = (*list)->next;
		free(temp);
	}
	*list = NULL;
}

char	*list_to_str(t_list *inp, int j)
{
	char	*input;
	int		i;

	i = 0;
	input = malloc(sizeof(input) * (j + 1));
	while (i < j && inp)
	{
		input[i] = inp->data;
		inp = inp->next;
		i++;
	}
	input[i] = '\0';
	ft_list_clear(&inp);
	return (input);
}

char	*read_input(void)
{
	int		i;
	int		j;
	char	*input;
	char	c;
	int		ret;
	t_list	*inp;

	i = 1;
	j = 0;
	inp = 0;
	input = 0;
	ret = read(0, &c, 1);
	if (ret == -1)
		return (NULL);
	ft_list_push_back(&inp, c);
	while (read(0, &c, 1))
	{
		ft_list_push_back(&inp, c);
		i++;
	}
	if (inp)
		input = list_to_str(inp, i);
	return (input);
}
