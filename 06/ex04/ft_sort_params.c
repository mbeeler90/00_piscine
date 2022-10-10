/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:05:35 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/24 20:55:20 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		target;
	int		i;
	int		j;
	int		k;
	int		score;

	target = 0;
	i = 1;
	j = 0;
	k = 1;
	score = 0;
	while (target < argc - 1)
	{
		i = 1;
		while (i < argc)
		{
			k = 1;
			score = 0;
			while (k < argc && k != i)
			{
				j = 0;
				while (argv[i][j] == argv[k][j] && argv[i][j] != '\n')
					j++;
				if (argv[i][j] > argv[k][j])
					score += 1;
				k++;
			}
			if (score == target)
				{
					j = 0;
					while (argv[i][j] != '\n')
					{
						ft_putchar(argv[i][j]);
						j++;
					}
				}
			i++;
		target++;
		}
	}
	return (0);
}
