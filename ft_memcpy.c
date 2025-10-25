/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:40:51 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/14 14:41:10 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "macaco";
	char	dest[10] = "banana";

	printf("Origem: %s\n", src);
	printf("Destino: %s\n", dest);

	ft_memcpy(dest, src, 2);

	printf("Origem depois: %s\n", src);
	printf("Destino depois: %s\n", dest);
}*/
