/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:47:40 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:51:18 by mumutlu          ###   ########.fr       */
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

/* #include <stab.h>

int	main()
{
	int i = char c[] = "muhammet";
	printf("%s",ft_tolower(i));
} */

// Fonksiyona girilen parametre değerini küçük harf ise büyütür,
// büyük harf ise olduğu gibi döndürür.
