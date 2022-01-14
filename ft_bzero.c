/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:27:44 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 15:22:11 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		((unsigned char *)s)[x] = '\0';
		x++;
	}
}
/*
int	main(void)
{
	const char s[]="specter";
	ft_bzero(s,2);

}
*/
