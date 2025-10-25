/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:10:44 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/23 14:47:14 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main()
{
	char	*str = ft_strdup("Banana Plitt tendeu");
	t_list	*box;

	if (!str)
		return (0);
	box = ft_lstnew(str);
	if (!box)
	{
		free(str);
		return (0);
	}
	printf("O que tem dentro da box e: %s\n", (char *)box->content);
	free(box->content);
	free(box);
}*/
