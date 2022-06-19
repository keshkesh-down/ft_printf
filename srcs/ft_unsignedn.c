/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:08:05 by sgendel           #+#    #+#             */
/*   Updated: 2022/01/12 20:09:20 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	powermalu(unsigned int nb)
{
	int	j;

	j = 1;
	while (nb / 10)
	{
		nb /= 10;
		j++;
	}
	return (j);
}

char	*ft_itoau(unsigned int n)
{
	char	*nbr;
	int		i;

	i = powermalu(n);
	nbr = (char *)malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (0);
	nbr[i] = '\0';
	while (n > 0)
	{
		nbr[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (nbr);
}

int	ft_unsignedn(unsigned int n)
{
	int		count;
	char	*nbr;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		nbr = ft_itoau(n);
		count += ft_printstr(nbr);
		free(nbr);
	}
	return (count);
}
