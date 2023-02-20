/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:48:07 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:57:46 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int main()
{
    int a ;
    char c = 'a';
    a = ft_isdigit(c);
    printf("%d", a);
} */

// Fonksiyona girilen parametrenin rakam
// olup olmadığını döndürür.(0 veya 1 şeklinde)
