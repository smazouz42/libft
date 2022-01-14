/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:39:11 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:16:58 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	unsigned int	l;
	char			*str;

	if (!s || !f)
		return (NULL);
	l = ft_strlen(s);
	x = 0;
	str = (char *)malloc((l + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	while (s[x])
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return ((char *)str);
}