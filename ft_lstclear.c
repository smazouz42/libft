/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smazouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:16:05 by smazouz           #+#    #+#             */
/*   Updated: 2021/11/12 11:16:50 by smazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nod;
	t_list	*temp;

	temp = (*lst);
	while (temp != NULL)
	{
		nod = temp->next;
		ft_lstdelone(temp, del);
		temp = nod;
	}
	*lst = NULL;
}
