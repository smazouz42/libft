/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:25:04 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 14:16:19 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
int main(void)
{
	ft_putchar(ft_toupper(-20));
	ft_putchar('/n');
	ft_putchar(ft_toupper(-20));
	return(0);
}
*/
