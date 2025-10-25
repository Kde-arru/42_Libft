/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:36:33 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/15 19:11:00 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (i + j < n && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char *haystack = "macaco louco";
	char *needle = "lou";
	char *ptr;

	ptr = ft_strnstr(haystack, needle, 12);

	if (ptr)
		printf("Substring encontrada: \"%s\"\n", ptr);
	else
		printf("Substring não encontrada\n");

	return 0;
}*/
