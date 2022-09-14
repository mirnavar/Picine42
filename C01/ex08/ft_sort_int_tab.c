/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:01:52 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/19 11:07:47 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	again;
	int	iter;

	i = 0;
	again = 1;
	iter = size - 1;
	while (again == 1)
	{
		again = 0;
		i = 0;
		while (i < iter)
		{
			if (tab[i + 1] < tab[i])
			{
				again = 1;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}

/*int	main(void)
{
	int	tab[] = {1, 0, 3, 4};
	int	size;
	int	i;

	size = 4;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
