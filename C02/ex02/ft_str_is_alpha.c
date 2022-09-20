/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:22:54 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/20 13:48:22 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122)
			&& str[i] != 32)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char str[] = "hoLU la454";
	ft_str_is_alpha(str);
	return (0);
}*/
