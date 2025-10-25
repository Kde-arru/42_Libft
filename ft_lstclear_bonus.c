/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:25:51 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/23 16:34:46 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		temp = current;
		current = current->next;
		ft_lstdelone(temp, (*del));
	}
	*lst = NULL;
}
/*
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	d;
	
	a = &b;
	b = &c;
	c = &d;
	d = null;

	ft_lstclear(t_list **lst, del);
}*/
