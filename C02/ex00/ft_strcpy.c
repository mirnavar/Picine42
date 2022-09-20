/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:44:02 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/20 14:15:38 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

/*void	ft_putchar(char c)
{
	write (1, &c, 1);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0'
		return (dest);
}

/*int	main(void)
{
	char	str1[30] = "Hello";
	char	str2[] = "tarros";

	ft_strcpy(str1, str2);
	printf("%s", str1);
	ft_putchar('\n');
	return (0);
}*/
