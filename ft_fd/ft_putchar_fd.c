/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:42:24 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:43:34 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <fcntl.h>

int main()
{
	int fd = open("test.txt",O_WRONLY);
	ft_putchar_fd('M',fd);
} */

// Belirtilen dosya tanımlayıcısına (fd) "c" parametresinden gelen
// karakteri yazar.
