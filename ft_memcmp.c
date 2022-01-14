/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:51:27 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 15:29:27 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*d1;
	unsigned char	*d2;

	x = 0;
	d1 = (unsigned char *) s1;
	d2 = (unsigned char *) s2;
	while (x < n)
	{
		if (d1[x] != d2[x])
			return (d1[x] - d2[x]);
		x++;
	}
	return (0);
}
/*
int main(void)
{
	char *s1 = "qpecter";
	char *s2 = "owectel";
	ft_putnbr(ft_memcmp(s1,s2,4));
	ft_putchar('\n');
	ft_putnbr(memcmp(s1;
	a = &b;
	int *s;
	int j = 2;
	s = &j;
	memcmp(a,s,16);
	ft_putnbr(b);

	return(0);
} *ptr = null
ptr == null
*/
