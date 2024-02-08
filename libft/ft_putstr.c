/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:11:38 by healeksa          #+#    #+#             */
/*   Updated: 2024/02/08 12:33:13 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
