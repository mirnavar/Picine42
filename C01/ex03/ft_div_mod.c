/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:57:00 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/19 10:50:49 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}	

/*int	main(void)
{
	int c;
	int d;
	int *x; 
	int *y; 
	//estas variables pueden o no llamarse igual que en la funcion de arriba
	c = 89;
	d = 7;
	x = &c;
	y = &d;
	ft_div_mod(c, d, x, y);
	printf("%d %d", *x, *y);
	return (0);
}*/
