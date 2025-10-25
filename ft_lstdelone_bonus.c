/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:09:11 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/23 16:21:48 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*void	ft_delist(void *node)
{
	free(node);
}

int	main(void)
{
	t_list	*a = malloc(sizeof(t_list));
	t_list	*ptr;
	
	ptr = a;
	ft_lstdelone(ptr, ft_delist);
	return (0);
}*/
