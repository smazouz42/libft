/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:09:08 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:16:18 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	x = 0;
	if (s)
	{
		while (s[x])
		{
			ft_putchar_fd(s[x], fd);
			x++;
		}
	}
}