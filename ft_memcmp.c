/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:51:27 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:15:55 by smazouz          ###   ########.fr       */
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
