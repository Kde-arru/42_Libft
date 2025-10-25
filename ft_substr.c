/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:42:57 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/17 16:08:51 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int main(void)
{
    const char *original = "abcdef";
    unsigned int start = 3;
    size_t len = 2;

    char *substr = ft_substr(original, start, len);
    if (!substr)
    {
        printf("Erro na alocação de memória\n");
        return 1;
    }
    printf("Texto original: %s\n", original);
    printf("Substring: %s\n", substr);

    free(substr);
    return 0;
}*/
