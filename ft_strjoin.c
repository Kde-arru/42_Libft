/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:45:03 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/17 15:47:23 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*all;

	if (!s1 || !s2)
		return (NULL);
	all = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!all)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		all[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		all[i++] = s2[j++];
	}
	all[i] = '\0';
	return (all);
}
/*
int	main(void)
{
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
	int size = 6;
	char *sep = " ";
	int	i = 0;
	char	*all;
	
	all = ft_strjoin(size, strs, sep);
	while (i < size)
	{
		printf("String in the index %d: %s\n", i, strs[i]);
		i++;
	}
	printf("New string: %s\n", all);
	free(all);
}*/
