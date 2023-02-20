/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:16:39 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 15:06:15 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_uc;
	const unsigned char	*s2_uc;
	size_t				index;

	index = 0;
	s1_uc = (const unsigned char *)s1;
	s2_uc = (const unsigned char *)s2;
	while (index < n)
	{
		if (s1_uc[index] != s2_uc[index])
			return (s1_uc[index] - s2_uc[index]);
		index++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>

int main()
{
	char str1[] = "muhsmmet";
	char str2[] = "muhammed";

	printf("%d\n", ft_memcmp (str1, str2, 8));
	printf("%d", memcmp(str1, str2, 8));
} */

// "s1" parametresi ile gösterilen bellek bölgesinin "n" parametre değeri
// kadar ilk byte'ını "s2" parametresi ile gösterilen bellek bölgesi ile
// karşılaştırır. Eğer her iki bellek bölgesindeki tüm değerler aynı
// ise sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri döndürür.
