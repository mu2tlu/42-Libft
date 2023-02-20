/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:48:34 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 16:55:38 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* #include <stdio.h>

int main()
{
	char	c = 'a';
	int		i = c;
	printf("%c", ft_toupper(i));
	return 0;
} */

// Fonksiyona girilen parametre değerini küçük harf ise büyütür,
// küçük harf ise olduğu gibi döndürür.
