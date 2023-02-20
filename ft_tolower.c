/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:40 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 16:54:24 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/* #include <stdio.h>

int main()
{
	char	c = 'A';
	int		i = c;
	printf("%c", ft_tolower(i));
	return 0;
} */

// Fonksiyona girilen parametre değerini büyük harf ise küçültür,
// büyük harf ise olduğu gibi döndürür.
