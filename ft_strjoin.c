/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:37:33 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 00:26:22 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dst;
	unsigned int	len;
	unsigned int	j;
	unsigned int	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = -1;
	len = (ft_strlen(s1)) + (ft_strlen(s2));
	dst = (char *)malloc((len + 1) * sizeof(*dst));
	if (dst == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[++j])
	{
		dst[i] = s2[j];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int main(void)
{
    char s[]="specter";
    char d[]="said";
    ft_putstr(ft_strjoin(s,d));
    return(0);
}
*/
