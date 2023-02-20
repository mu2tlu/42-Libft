/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 02:39:27 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 14:58:05 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char str1[] = "4m";
	char str2[] = "4n";

	printf("%d", ft_strncmp(str1, str2, 2));
} */

// "s1" parametresi ve "s2" parametresi (iki string değeri)
// "n" değeri kadar karşılaştırılır.
// Aynı ise 0 değeri farklı ise 0'dan farklı bir değer girilir.
// NUll karakter gördüğü zaman durur.
