/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:31:04 by healeksa          #+#    #+#             */
/*   Updated: 2024/02/05 19:11:07 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_putstr(char *s, int fd)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		len += ft_putchar_fd(s[i], fd);
		i++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	char	*num;
	int		count;

	num = ft_itoa(n);
	count = ft_strlen(num);
	ft_putstr(num, 1);
	free(num);
	return (count);
}

static int	ft_count_digits(int n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_unsigned_itoa(int n)
{
	size_t	digit_count;
	char	*num;

	digit_count = ft_count_digits(n);
	num = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!num)
		return (NULL);
	num[digit_count] = '\0';
	if (n == 0)
		num[0] = '0';
	while (n != 0)
	{
		digit_count--;
		num[digit_count] = n % 10 + '0';
		n /= 10;
	}
	return (num);
}

int	ft_unsigned(int n)
{
	char	*num;
	int		count;

	num = ft_unsigned_itoa(n);
	count = ft_strlen(num);
	ft_putstr(num, 1);
	free(num);
	return (count);
}
