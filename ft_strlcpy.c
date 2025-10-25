/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:15:17 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/15 16:48:28 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
	char src[] = "macaco";
	char dst[10];
	char small[4];

	size_t len1 = ft_strlcpy(dst, src, sizeof(dst));
	size_t len2 = ft_strlcpy(small, src, sizeof(small));

	printf("src:    \"%s\"\n", src);
	printf("dst:    \"%s\" (ret: %zu)\n", dst, len1);
	printf("small:  \"%s\" (ret: %zu)\n", small, len2);

	return (0);
}*/
