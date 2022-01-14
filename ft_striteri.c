/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_striteri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:51:21 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 14:12:51 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	x = 0;
	if (s)
	{
		while (s[x])
		{
			f(x, (s + x));
			x++;
		}
	}
}
/*
void	ft_test(unsigned  int x, char *c )
{
	*c = *c + 1;
}
int main(void)
{
	char s[]="abc";
	
	ft_striteri(s, ft_test);
	ft_putstr(s);
}
*/
