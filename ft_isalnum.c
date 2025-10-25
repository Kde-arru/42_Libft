/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:09:45 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/13 14:54:52 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*int main()
{
    int c = 'a';
    int d = '/';
    int e = '1';

    printf("%d\n", ft_isalnum(c));
    printf("%d\n", ft_isalnum(d));
    printf("%d\n", ft_isalnum(e));
}*/
