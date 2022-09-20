/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:07:02 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/21 11:35:56 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size);
}

/*int	main(void)
{
	char	str1[] = "hola amigui";
	char	str2[20] = "18434";
	unsigned int	s;

	s = 5;
	ft_strlcpy(str2, str1, s);
	printf("%s", str2);
	return (0);
}*/
