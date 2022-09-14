/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:20:30 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/19 11:00:50 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *b;
	*b = *a;
	*a = swap;
}

/*int	main(void)
{
	int c;
	int d;
	//las variables pueden o no tener el mismo nombre que los punteros (a, b)
	c = 8;
	d = 32;	
	ft_swap(&c, &d);
}*/
