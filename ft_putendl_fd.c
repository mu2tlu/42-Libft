/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:44:01 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:44:33 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/* #include <fcntl.h>

int main()
{
	int fd = open("test.txt",O_WRONLY);
	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
} */

// Belirtilen dosya tanımlayıcısına (fd) "s" parametresinden gelen
// char dizisi yazılır ve bir alt satıra geçer.
