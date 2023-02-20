/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:59:11 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 15:14:46 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

/* #include <stdio.h>

int main(void)
{
	printf("%d",ft_isascii('8'));
} */

// Fonksiyona girilen parametrenin ascii değer aralığında
// olup olmadığını döndürür. (0 veya 1 şeklinde)
