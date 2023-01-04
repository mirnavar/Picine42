/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:52:06 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/28 17:08:46 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ignore_spaces(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ((str[i] == ' '
				|| str[i] == '\t' || str[i] == '\r'
				|| str[i] == '\n' || str[i] == '\v'
				|| str[i] == '\f')))
	{
		i++;
	}
	return (i);
}

int	ft_count_menos(char	*str, int *i)
{
	int	count_menos;

	count_menos = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			count_menos++;
		*i = *i + 1;
	}
	return (count_menos);
}

int	ft_atoi(char	*str)
{
	int	count;
	int	result;
	int	count_menos;

	result = 0;
	count = ft_ignore_spaces(str);
	count_menos = ft_count_menos(str, &count);
	while (str[count] != '\0' && str[count] >= '0'
		&& str[count] <= '9')
	{
		result = (result * 10) + str[count] - '0';
		count++;
	}
	if (count_menos % 2 == 0)
		return (result);
	else
		return (-result);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("\n  ---55i8"));
	printf("%d\n", atoi("--u"));
	return (0);
}*/
