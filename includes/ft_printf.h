/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:08:28 by sgendel           #+#    #+#             */
/*   Updated: 2022/01/12 20:46:17 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char	*s);
int		ft_putnbr(int n, int i);
size_t	ft_strlen(const char *s);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
char	*ft_itoa(int n);
int		ft_printpercent(void);
int		ft_pointer(unsigned long long p);
int		ft_unsignedn(unsigned int n);
int		ft_hex_lower(unsigned int n);
int		ft_hex_upper(unsigned int n);
int		powerhex(unsigned int nb);
#endif
