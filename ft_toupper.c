/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:48:34 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 14:29:19 by mumutlu          ###   ########.fr       */
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

/* #include <stab.h>

int	main()
{
	char c[] = 'A';
	int i;
	i = c;
	printf("%d",ft_tolower(i));
} */

// Fonksiyona girilen parametre değerini büyük harf ise küçültür,
// küçük harf ise olduğu gibi döndürür.
