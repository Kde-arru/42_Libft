/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:06:31 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/20 17:57:44 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_decimal_places(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*mount_str(char *str, long l, int i)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l > 0)
	{
		str[i--] = l % 10 + '0';
		l /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	l;

	l = n;
	i = ft_decimal_places(l);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	return (mount_str(str, l, i - 1));
}
/*
int	main(void)
{
	int	n;
	char	*str;

	n = 12412412;
	str = ft_itoa(n);
	if (str)
	{
		printf("%s\n", str);
		free(str);
	}
	return (0);
}*/
