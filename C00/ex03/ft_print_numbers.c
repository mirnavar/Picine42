/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:44:07 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/14 11:31:21 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	p;

	p = '0';
	while (p <= '9')
	{
		write (1, &p, 1);
		p++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
