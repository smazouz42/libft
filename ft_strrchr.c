/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:24:08 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 16:55:38 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen(s);
	while (x >= 0)
	{
		if (s[x] == (unsigned char)c)
			return ((char *)s + x);
		x--;
	}
	return (NULL);
}