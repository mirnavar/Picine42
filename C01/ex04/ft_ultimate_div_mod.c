/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:03:16 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/18 11:42:11 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swapa;
	int	swapb;	

	swapa = *a;
	swapb = *b;
	*a = swapa / swapb;
	*b = swapa % swapb;
}
	//	printf("%d %d", *a, *b);

/*int	main(void)
{
	int c;
	int d;

	c = 36;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
}*/
