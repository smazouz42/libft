/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:01:36 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 16:02:21 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s);

void	*ft_calloc(size_t count, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			x;
	size_t			len2;

	x = 0;
	if (!s)
		return (NULL);
	len2 = ft_strlen(s);
	if (len > len2)
		len = len2;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (start <= len2)
	{
		while (s[x] && len > x)
		{
			str[x] = s[start];
			x++;
			start++;
		}
	}
	str[x] = '\0';
	return (str);
}
