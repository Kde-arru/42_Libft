/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:35:49 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/17 16:08:14 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	int		i;

	len = ft_strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*original = "macaco louco";
	char	*copia;

	copia = ft_strdup(original);
	if (copia == NULL)
	{
		printf("Erro ao alocar memória!\n");
		return (1);
	}
	printf("String original: %s\n", original);
	printf("String duplicada: %s\n", copia);
	free(copia);
	return (0);
}
*/
