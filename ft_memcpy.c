/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 08:55:43 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:16:00 by smazouz          ###   ########.fr       */
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