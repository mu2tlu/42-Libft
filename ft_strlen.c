/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:58:49 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 14:23:52 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* #include <stdio.h>

int main()

{
	char a[] = "mu2tlu";
	printf("%zu", ft_strlen(a));
} */

// "s" parametresinden gelen karakter dizisinin uzunluğunu döndürür.
