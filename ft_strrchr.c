/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:14:36 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/15 16:34:52 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "macaco louco";
	char *ptr = ft_strrchr(str, 'c');

	printf("String original: \"%s\"\n", str);
	if (ptr)
		printf("Último 'c' encontrado em: \"%s\"\n", ptr);
	else
		printf("Caractere não encontrado\n");
}*/
