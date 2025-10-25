/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:06:30 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/14 14:40:19 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b_zero;

	i = 0;
	b_zero = s;
	while (i < n)
	{
		b_zero[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	buffer[10] = "MACACO";

	ft_bzero(buffer, 3);
	for (int i = 0; i < 10; i++)
    printf("Byte %c: %c\n", i, buffer[i]);
}*/
