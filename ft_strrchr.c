/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:54:38 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 15:27:20 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
	char str[] = "muhammet";
	int c = 'a';
	printf("%s", ft_strrchr(str, c));
} */

// Bulunan karakterden "c" itibaren sayar ve döndürür.
// strchr ile aynı sonucu verir.
// (Bu olayı tersten başlayarak yapar)
