/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:47:03 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/21 12:10:02 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void ft_upstr(unsigned int n, char *str)
{
	(void)n;
	*str += 1;
}

int	main(void)
{
	char	str[] = "Banana Plitt tendeu";

	ft_striteri(str, ft_upstr);
	printf("%s\n", str);
	return (0);
}*/
