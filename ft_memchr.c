/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:16:51 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 15:03:19 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*(str++) == (unsigned char )c)
			return ((void *)(str - 1));
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s = "muha\0mmet";

	printf("%s", (char *)ft_memchr(s, 'e', 8));
} */

// "s" parametresi ile gösterilen bellek bölgesinin "n" parametre değeri kadar
// ilk byte'ında "c" parametresi ile gösterilen değerin (unsigned char olarak
// değerlendirilir) ilk geçtiği yeri arar ve bu bellek adresini gösteren
// bir işaretçi geri döndürür.
