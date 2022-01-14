/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:02:32 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:16:09 by smazouz          ###   ########.fr       */
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