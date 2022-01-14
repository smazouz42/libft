/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:14:44 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 16:15:37 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t			i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	if (destsize == 0)
		return (l);
	while (src[i] != '\0' && i < (destsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
/*
int main(void)
{
	char s[]="specter";
	char d[6]="said";
	ft_putnbr(ft_strlcpy(d,s,6));
	return (0);
}
*/