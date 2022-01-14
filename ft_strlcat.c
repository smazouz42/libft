/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:11:27 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 16:15:29 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	j;
	size_t			res;

	i = 0;
	while (dst[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (dstsize <= i)
		res += dstsize;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}
/*
int main(void)
{
	char s[10]="specter";
	char d[6]= "said";
	ft_putnbr(ft_strlcat(d,s,2));
	ft_putnbr(strlcat(d,s,2));
	ft_putchar('\n');
	ft_putstr(d);
	return(0);
}
*/
