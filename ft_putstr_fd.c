/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:09:08 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 17:17:02 by smazouz          ###   ########.fr       */
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
/*
int main(void)
{
	int fd;
	fd = open("j",O_WRONLY);
	ft_putstr_fd("specter",fd);
	return(0);
}
*/
