/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:43:53 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/22 19:07:25 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	char	*inteiro;
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	d;
	t_list	*current;

	d.content = (char *)"Banana4";
	a.content = (char *)"Banana1";
	a.next = &b;
	a.next->content = (char *)"Banana2";
	a.next->next = &c;
	a.next->next->content = (char *)"Banana3";
	a.next->next->next = NULL;
	current = &a;
	ft_lstadd_front(&current, &d);
	while (current)
	{
		inteiro = (char *)(current->content);
		printf("%s\n", inteiro);
		current = current->next;
	}
}*/
