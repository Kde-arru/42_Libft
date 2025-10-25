/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:11:12 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/21 18:34:47 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sing;
	int	num;
	int	i;

	i = 0;
	sing = 1;
	num = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sing *= -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (sing * num);
}

/*int main(void)
{
    char *str1 = "   12345";
    char *str2 = "   -6789";
    char *str3 = "+42";
    char *str4 = "   0";
    char *str5 = "abc123"; // teste inválido

    printf("'%s' -> %d\n", str1, ft_atoi(str1));
    printf("'%s' -> %d\n", str2, ft_atoi(str2));
    printf("'%s' -> %d\n", str3, ft_atoi(str3));
    printf("'%s' -> %d\n", str4, ft_atoi(str4));
    printf("'%s' -> %d\n", str5, ft_atoi(str5));

    return 0;
}*/
