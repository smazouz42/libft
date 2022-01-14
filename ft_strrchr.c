/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:24:08 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 15:16:59 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s);

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
/*
int main(void)
{
	const char s[]= "specter\0sgshu\0dfds\0";
	printf("%s",ft_strrchr(s,'\0'));
	return(0);

}
*/
