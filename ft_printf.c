/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:26:34 by healeksa          #+#    #+#             */
/*   Updated: 2024/02/05 19:17:16 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// p, u, x, X

int	ft_format(char c, va_list arg)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar_fd(va_arg(arg, int), 1);
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *), 1);
	else if (c == 'p')
		ft_putchar_fd('p', 1);
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		ft_putstr("lol", 1);
	else if (c == 'x')
		ft_putchar_fd('x', 1);
	else if (c == 'X')
		ft_putchar_fd('X', 1);
	else if (c == '%')
		len += ft_putchar_fd('%', 1);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		n;
	va_list	arg;

	i = 0;
	n = 0;
	va_start(arg, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			n += ft_format(s[i + 1], arg);
			i++;
		}
		else
			n += ft_putchar_fd(s[i], 1);
		i++;

	}
	return (n);
}
