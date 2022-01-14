/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:36:58 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 17:02:33 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (!dst && !src)
		return (NULL);
	i = -1;
	s = (char *)src;
	d = (char *)dst;
	if (&d[i + 1] > &s[i + 1])
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	else
	{
		while (len > ++i)
		{
			d[i] = s[i];
		}
	}
	return (d);
}
