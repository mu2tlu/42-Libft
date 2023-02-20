/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:56:28 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 15:25:35 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* #include <stdio.h>

int main(void)
{
	char str1[] = "muhammet";
	char str2[]	= "mu2tlu";
	printf("%s",ft_memcpy(str1, str2, 5));  //(overlap durumu vardır.)
	printf("%s",str2);

} */

// "src" parametresi ile gösterilen bellek bölgesindeki karakterleri,
// "n" parametre değeri kadar uzunlukta, "dst" parametresindeki
// bellek bölgesine kopyalar.

// Sadece 33. ve 35. satırları
