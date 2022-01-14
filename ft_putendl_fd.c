/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:49:59 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 14:13:05 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	x;

	x = 0;
	if (s)
	{
		while (s[x])
		{
			ft_putchar_fd(s[x], fd);
			x++;
		}
		ft_putchar_fd('\n', fd);
	}
}
/*
int	main(void)
{
	ft_putendl("specter");
}
*/
