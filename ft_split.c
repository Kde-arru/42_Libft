/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:39:11 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/20 17:03:56 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	ft_sep_len(const char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

static void	ft_free_array(char **strs, size_t seg)
{
	size_t	i;

	i = 0;
	while (i < seg)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	**ft_fill_array(char **strs, char const *s, char sep, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	seg;

	i = 0;
	seg = 0;
	while (seg < words)
	{
		j = 0;
		while (s[i] && s[i] == sep)
			i++;
		strs[seg] = malloc(ft_sep_len(&s[i], sep) + 1);
		if (!strs[seg])
			return (ft_free_array(strs, seg), NULL);
		while (s[i] && s[i] != sep)
		{
			strs[seg][j] = s[i];
			i++;
			j++;
		}
		strs[seg][j] = '\0';
		seg++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	segs;

	if (!s)
		return (NULL);
	segs = ft_countwords(s, c);
	strs = malloc((segs + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs[segs] = 0;
	if (segs > 0)
		strs = ft_fill_array(strs, s, c, segs);
	return (strs);
}
/*
int main(void)
{
    char **result;
    int i;

    result = ft_split("Hello world 42 school", ' ');
    if (!result)
        return (1);
    for (i = 0; result[i]; i++)
        printf("[%d]: %s\n", i, result[i]);
    for (i = 0; result[i]; i++)
        free(result[i]);
    free(result);
}*/
