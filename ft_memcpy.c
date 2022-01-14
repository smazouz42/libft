/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:55:43 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 15:28:51 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	if (!dst && !src)
		return (0);
	while (x < n)
	{
		*((unsigned char *)(dst + x)) = *((unsigned char *)(src + x));
		x++;
	}
	return (dst);
}
/*
int main(void)
{
	char d[]= "specter";
	char s[] = "";
	ft_putstr(ft_memcpy(s,d,4));
	return(0);
}

int	main(void)
{
	int i = 0;
	int dst[] = {5,4,1};
	int src[] = {7,8};
	int size = sizeof(int) * 2;
	ft_memcpy(dst,src, size);
	while(i < 3)
	{
		printf("%d", dst[i]);
		i++;
	}

}
*/
