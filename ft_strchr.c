/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:09:43 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 16:08:44 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

/* #include <stdio.h>

int main()
{
	char str[] = "muhammed";
	int c = 'a';
	printf("%s", ft_strchr(str, c));
} */

// "s" parametresi ile gösterilen karakter dizisinde "c" parametresi ile
// gösterilen değerin (unsigned char olarak değerlendirilir) ilk geçtiği
// yeri arar ve bu bellek adresini gösteren bir işaretçi geri döndürür.
