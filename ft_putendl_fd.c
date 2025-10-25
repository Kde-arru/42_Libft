/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-arru <kde-arru@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:10:27 by kde-arru          #+#    #+#             */
/*   Updated: 2025/10/21 14:19:10 by kde-arru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	int	fd;
	char	str[] = "Batata Splitt Tendeu";

	fd = open("teste.txt", O_WRONLY);
	ft_putendl_fd(str, fd);
	return (0);
}*/
