/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:45:53 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:46:17 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* #include <fcntl.h>

int main()
{
    int fd= open("test.txt",1);
    ft_putstr_fd("Merhaba 42 Kocaeli",fd);
} */

// Belirtilen dosya tanımlayıcısına (fd) "s" parametresinden gelen
// char dizisi yazılır.
