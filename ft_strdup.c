/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:08:16 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 15:27:24 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	s;
	unsigned int	i;
	char			*dst;

	i = 0;
	s = 0;
	while (s1[s] != '\0')
		s++;
	dst = (char *)malloc((s + 1) * sizeof(*dst));
	if (dst == 0)
		return (NULL);
	while (i < s)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char s[]="specter";
	ft_putstr(ft_strdup(s));
	return(0);
}
*/
