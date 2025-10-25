/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:54:31 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/15 19:24:55 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char data[] = {1, 2, 3, 4, 5};
	char *ptr;

	ptr = ft_memchr(data, 6, 5);
	if (ptr)
		printf("Encontrado: %d\n", *ptr);
	else
		printf("Não encontrado\n");

	return 0;
}*/
