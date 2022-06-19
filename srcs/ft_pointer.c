/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:47:25 by sgendel           #+#    #+#             */
/*   Updated: 2022/01/12 19:25:12 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printp(unsigned long long p)
{
	if (p > 15)
	{
		ft_printp(p / 16);
		ft_printp(p % 16);
	}
	else
	{
		if (p <= 9)
			ft_putchar((p + '0'));
		else
			ft_putchar((p - 10 + 'a'));
	}
}

int	ft_pointer(unsigned long long p)
{
	int	count;

	count = 0;
	count += write (1, "0x", 2);
	if (p == 0)
		count += write (1, "0", 1);
	else
	{
		ft_printp(p);
		while (p != 0)
		{
			count++;
			p = p / 16;
		}
	}
	return (count);
}
