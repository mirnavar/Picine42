/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:27:45 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/14 11:29:22 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	r;

	r = 'a';
	while (r <= 'z')
	{
		write (1, &r, 1);
		r++;
	}
}	

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
