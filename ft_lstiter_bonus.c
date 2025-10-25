/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:54:35 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/23 17:19:00 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}
/*
void	ft_print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list *list = ft_lstnew(ft_strdup("one"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("two")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("three")));

	ft_lstiter(list, ft_print_content);

	ft_lstclear(&list, free);

	return 0;
}*/
