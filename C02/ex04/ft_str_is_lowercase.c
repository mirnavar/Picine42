/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:11:15 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/20 14:26:55 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "urya";

	ft_str_is_lowercase(str);
	return (0);
}*/
