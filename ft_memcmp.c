/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:20:21 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/15 19:25:35 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char a[] = "abced";
	char b[] = "abcd";

	int result = ft_memcmp(a, b, 4);

	if (result == 0)
		printf("Blocos iguais\n");
	else if (result < 0)
		printf("Bloco a < bloco b\n");
	else
		printf("Bloco a > bloco b\n");

	return 0;
}*/
