/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 23:14:38 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:56:43 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* #include <stdio.h>

int main()
{
   printf("%d",ft_isalnum('.'));
} */

// Fonksiyona girilen parametrenin alfanumerik karakter olup olmadığını
// döndürür. (0 veya 1 şeklinde)
