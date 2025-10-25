/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:13:19 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/23 12:33:43 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	t_list	*a = malloc(sizeof(t_list));
	t_list	*b = malloc(sizeof(t_list));
	t_list	*c = malloc(sizeof(t_list));

	if (!a || !b || !c)
		return (0);

	a->next = b;
	a->next->next = c;
	a->next->next->next = NULL;
	printf("O tamanho da lista e: %d\n", ft_lstsize(a));
	return (0);
}*/
