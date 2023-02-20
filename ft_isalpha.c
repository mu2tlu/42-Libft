/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:26:01 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:57:01 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
	{
		return (0);
	}
}

/* #include <stdio.h>

int	main(void)
{
	int b;
	char a = 'c';
	b = ft_isalpha('A');
	printf("%d", b);
} */

// Fonksiyona girilen parametrenin alfabetik karakter olup olmadığını döndürür.
// (0 veya 1 şeklinde)
