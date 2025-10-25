/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:52:10 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/23 13:57:57 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*static void	ft_free_list(t_list *lst)
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
	t_list	*c = ft_lstnew("Tendeu");
	
	a->next = b;
	b->next = c;
	c->next = NULL;
	if (!a || !b || !c)
	{
		free(a);
		free(b);
		free(c);
		return (1);
	}
	printf("O conteudo do ultimo no e: %s\n", (char *)ft_lstlast(a)->content);
	ft_free_list(a);
}*/
