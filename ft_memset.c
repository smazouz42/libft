/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:02:32 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 15:21:38 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			n;

	str = b;
	n = 0;
	while (len > n)
	{
		*str = (unsigned char)c;
		str++;
		len --;
	}
	return (b);
}
/*
int main(void)
{
	int *a;
	int b;

	b = 5;
	a = &b;
	memset(a,4,2);
	ft_putnbr(b);

	unsigned char s[]="specter";
	ft_putstr(ft_memset(s, 'A', 5));
	ft_putchar('\n');
	ft_putstr(memset(s, 'A', 5));

	return(0);
}
*/
