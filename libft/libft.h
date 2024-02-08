/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:20:10 by healeksa          #+#    #+#             */
/*   Updated: 2024/02/08 12:33:50 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_toupper(int c);
char	*ft_itoa(int n);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr(char *s, int fd);
int		ft_putnbr(int n);

#endif
