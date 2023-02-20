/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 03:26:12 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 14:44:49 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	sizedst;
	size_t	sizesrc;

	sizedst = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	a = ft_strlen(dst);
	if (dstsize <= sizedst)
		return (dstsize + sizesrc);
	i = 0;
	while (src[i] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[i];
		a++;
		i++;
	}
	dst[a] = '\0';
	return (sizedst + sizesrc);
}

/* #include <stdio.h>
#include <string.h>

 int main(void)
{
    char str1[] = "Ali";
    char str2[] = "Veli";

    printf("%zu", ft_strlcat(str1, str2, 3));
	printf("\n%s", str1);

} */

// dst dizisinin son karakteri null'dan sonra
// src dizisini ekliyor. dst'den n kadar ilerler.

// "src" parametresinden gelen karakter dizisini "dst" parametresinden gelen
// diziye ekliyor."n" parametresi ise "dst" dizisinin maksimum boyutunu belirler.
