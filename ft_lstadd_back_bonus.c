/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:48:41 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/23 15:35:00 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
static void	ft_free_list(t_list *lst)
{
	t_list	*tmp;
	
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

int	main(void)
{
	t_list	*a = ft_lstnew("Banana");
	t_list	*b = ft_lstnew("Plitt");
	t_list	*c = ft_lstnew("tendeu");
	t_list	*d = ft_lstnew("Ultimo");
	t_list	*current;

	if (!a || !b || !c || !d)
	{
		free(a);
		free(b);
		free(c);
		free(d);
		return (1);
	}
	a->next = b;
	b->next = c;
	current = a;
	ft_lstadd_back(&a, d);
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_free_list(a);
	return (0);
}*/
