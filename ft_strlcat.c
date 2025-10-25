/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:26:11 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/15 14:26:51 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	srclen = 0;
	while (dest[dstlen] && dstlen < size)
		dstlen++;
	while (src[srclen])
		srclen++;
	if (size <= dstlen)
		return (size + srclen);
	i = 0;
	while (src[i] && (dstlen + i) < (size - 1))
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	if (dstlen + i < size)
		dest[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
int	main(void)
{
	char dst[20] = "macaco";
	char src[] = " louco";

	size_t result = ft_strlcat(dst, src, sizeof(dst));

	printf("Resultado: \"%s\"\n", dst);
	printf("Retorno: %zu\n", result);

	return (0);
}*/
