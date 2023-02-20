/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 05:22:58 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 14:51:00 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen (src));
}

/* #include <stdio.h>

int main()
{
	char dst[] = "mu2";
	char src[] = "fatih";

	printf("%zu\n", ft_strlcpy(dst, src, 6));
	printf("%s",dst);
} */

// "src" parametresinden gelen karakter dizisini "n" parametresindeki
// değer kadar "dest" parametresinden gelen diziye kopyalar
// ve src'nin uzunluğunu döndürür.
