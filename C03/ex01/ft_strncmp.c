/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:36:23 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/27 08:04:31 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && (i < n - 1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char			*str1;
	char			*str2;
	unsigned int	n;

	n = 0;
	str1 = "motomammi";
	str2 = "motocicleta";
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
	return (0);
}*/
