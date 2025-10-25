/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:16:36 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/21 11:43:44 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!(char)c)
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Banana Plitt tendeu";
	char	*ptr;

	ptr = ft_strchr(str, 't');
	if (ptr)
		printf("Achei o caractere: '%c' em: \"%s\"\n", *ptr, ptr);
	else
		printf("Esse caracter nao tem na string\n");
	return (0);
}*/
