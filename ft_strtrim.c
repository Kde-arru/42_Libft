/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:17:01 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/21 11:43:19 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*trimstr;

	if (!s1)
		return (ft_strdup(""));
	size = ft_strlen(s1);
	while (size > 0 && ft_strchr(set, s1[size - 1]))
		size--;
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
		if (size > 0)
			size--;
	}
	trimstr = malloc(size + 1);
	if (!trimstr)
		return (NULL);
	ft_memcpy(trimstr, s1, size);
	trimstr[size] = '\0';
	return (trimstr);
}
/*
int	main(void)
{
	char	s[] = "----Hello Word----";
	char	set[] = "-";
	char	*strim;

	strim = ft_strtrim(s, set);
	printf("%s", strim);
}*/
