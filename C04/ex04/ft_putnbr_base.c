/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirnavar <mirnavar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:26:22 by mirnavar          #+#    #+#             */
/*   Updated: 2022/07/28 18:59:21 by mirnavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char	*base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

char	ft_not_same_char(char *base, int ind)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < ind)
	{
		if (base[i] == '-' || base[i] == '+')
			return ('F');
		while (base[j])
		{
			j++;
			if (base[i] == base[j])
				return ('F');
		}
		i++;
		j = i;
	}
	return ('V');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	ind;

	ind = ft_strlen(base);
	if (ft_not_same_char(base, ind) == 'V' && ind > 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr < ind)
			write(1, &base[nbr], 1);
		else
		{
			ft_putnbr_base(nbr / ind, base);
			ft_putnbr_base(nbr % ind, base);
		}
	}
}

/*int	main(void)
{
	int		nbr;
	char	str[] = "01";

	nbr = 42;
	ft_putnbr_base(nbr, str);
	return (0);
}*/
