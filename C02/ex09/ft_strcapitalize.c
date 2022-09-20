/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:20:51 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/20 19:42:11 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 48 && str[i] <= 57)
				|| (str[i] >= 65 && str[i] <= 90)
				|| (str[i] >= 97 && str[i] <= 122)))
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
