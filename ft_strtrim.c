/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:56:49 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:17:12 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	x;

	len = ft_strlen(s1);
	x = 0;
	while (x < len)
	{
		if (ft_strchr(set, s1[x]) == 0)
			break ;
		x++;
	}
	return (x);
}

int	ft_getend(const char *s1, const char *set)
{
	size_t	len;
	size_t	x;

	len = ft_strlen(s1);
	x = 0;
	while (x < len)
	{
		if (ft_strchr(set, s1[len - x - 1]) == 0)
			break ;
		x++;
	}
	return (len - x);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *)(s1 + start), end - start + 1);
	return (str);
}