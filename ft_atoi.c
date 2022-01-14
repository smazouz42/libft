/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <smazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:24:22 by smazouz           #+#    #+#             */
/*   Updated: 2022/01/14 15:14:52 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	count;

	res = 0;
	i = 0;
	count = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (count == -1)
		return (-res);
	else
		return (res);
}
