/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:17:29 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:17:00 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n > 0)
	{
		while ((s1[x] && s2[x]) && (s1[x] == s2[x]) && x < n - 1)
			x++;
		return ((unsigned char)s1[x] - (unsigned char)s2[x]);
	}
	return (0);
}