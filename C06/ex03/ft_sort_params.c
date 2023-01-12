/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:45:03 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/28 15:36:41 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

void	ft_putchar(char **argv, int argc, int a)
{
	int	i;

	while (a < argc)
	{
		i = 0;
		while (argv[a][i])
			i++;
		write(1, argv[a], i);
		write(1, "\n", 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc < 2)
		return (0);
	while (j < argc - 1)
	{
		i = 0;
		if (argv[j][i] == argv[j + 1][i])
		{
			while ((argv[j][i] || argv[j + 1][i])
				&& (argv[j][i] == argv[j + 1][i]))
				i++;
		}
		if (argv[j][i] > argv[j + 1][i])
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j = 0;
		}
		j++;
	}
	ft_putchar(argv, argc, 1);
}
