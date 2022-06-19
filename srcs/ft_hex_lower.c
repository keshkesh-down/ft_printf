/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:08:05 by sgendel           #+#    #+#             */
/*   Updated: 2022/01/12 20:49:17 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	powerhex(unsigned int nb)
{
	int	j;

	j = 1;
	while (nb / 16)
	{
		nb /= 16;
		j++;
	}
	return (j);
}

void	ft_put_hex_lower(unsigned int n)
{
	if (n >= 16)
	{
		ft_put_hex_lower(n / 16);
		ft_put_hex_lower(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n + '0'));
		else
			ft_putchar((n - 10 + 'a'));
	}
}

int	ft_hex_lower(unsigned int n)
{
	int		count;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
		ft_put_hex_lower(n);
	count = powerhex(n);
	return (count);
}
