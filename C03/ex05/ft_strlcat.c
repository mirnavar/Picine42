/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:15:43 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/27 09:14:44 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	res_d;
	unsigned int	res_s;

	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size <= res_d)
		return (size + res_s);
	while (src[j] != '\0' && j < size - res_d - 1)
	{
		dest[res_d + j] = src[j];
		j++;
	}
	dest[res_d + j] = '\0';
	return (res_d + res_s);
}
/*
int	main(void)
{
	char	str1[50] = "que?";
	char	*str2;
	unsigned int	i;

	i = 20;
	str2 = "cafe, per voste";
	printf("%d\n", ft_strlcat(str1, str2, i));
	printf("%s", str1);
	//printf("%lu\n", strlcat(str1, str2, i));
	return (0);
}*/
