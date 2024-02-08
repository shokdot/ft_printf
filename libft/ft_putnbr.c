/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:31:18 by healeksa          #+#    #+#             */
/*   Updated: 2024/02/08 12:31:21 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
