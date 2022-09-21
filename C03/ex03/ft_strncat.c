/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:44:04 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/26 09:39:49 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>
//#include <string.h>

int	ft_strlen(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				j;

	j = ft_strlen(dest);
	a = 0;
	while ((src[a] != '\0') && (a < nb))
	{
		dest[j] = src[a];
		j++;
		a++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[50] = "hey";
	char	*str2;
	unsigned int	i;

	i = 4;
	str2 = "mamamia";
//	printf("%s\n", strncat(str1, str2, i));
//	ft_strncat(str1, str2, i);
	printf("%s\n", ft_strncat(str1, str2, i));
	return (0);
}*/
