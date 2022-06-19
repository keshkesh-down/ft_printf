/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 20:44:44 by sgendel           #+#    #+#             */
/*   Updated: 2022/01/12 20:50:04 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_put_hex_upper(unsigned int n)
{
	if (n >= 16)
	{
		ft_put_hex_upper(n / 16);
		ft_put_hex_upper(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar((n + '0'));
		else
			ft_putchar((n - 10 + 'A'));
	}
}

int	ft_hex_upper(unsigned int n)
{
	int		count;

	count = 0;
	if (n == 0)
		count += write(1, "0", 1);
	else
		ft_put_hex_upper(n);
	count = powerhex(n);
	return (count);
}
