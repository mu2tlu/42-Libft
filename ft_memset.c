/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:15:27 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 14:21:14 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[15] = "muhammet";

	printf("%s", ft_memset(str, 'a', 20));
	return (0);
} */

// "c" parametresi ile gösterilen bellek bölgesindeki karakteri dest
// parametresindeki bellek bölgesinin ilk "n" parametre değeri kadar byte'ına
// kopyalar.
