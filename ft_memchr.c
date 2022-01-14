/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:01:27 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 15:23:16 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s)[x] == ((unsigned char)c))
			return ((unsigned char *)&s[x]);
		x++;
	}
	return (NULL);
}
/*
int main(void)
{
	int j = 0;
	int i[4]={1,2,5,6};
	int size = sizeof(int) * 4;
	//memchr(i,2,size);
	int *a;
	a = memchr(i,2,16);
	while(j < 3)
	{
		printf("%d",a[j]);
		j++;
	}
	const char s[]="specter";
	ft_putstr(ft_memchr(s,'t',5));
	return(0);
}
*/
