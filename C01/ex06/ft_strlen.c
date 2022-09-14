/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:14:13 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/18 15:43:31 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		count = count + 1;
		i++;
	}
	return (count);
}

//	printf("%d", count);

/*int	main(void)
{
	ft_strlen("rainbow dash");
}*/
