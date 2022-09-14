/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:59:14 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/20 16:38:23 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tab2;

	i = 0;
	while (i < size / 2)
	{
		tab2 = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tab2;
		i++;
	}
}

/*int	main(void)
{
	int	size;
	int	tab[] = {1, 2, 3, 4, 5};
	int	i;

	size = 5;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
