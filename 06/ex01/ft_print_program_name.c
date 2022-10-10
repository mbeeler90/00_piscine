/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:13:01 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/24 17:12:42 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc] != '\0')
	{
		ft_putchar(argv[0][argc]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
