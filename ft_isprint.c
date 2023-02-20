/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:40:46 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:58:24 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* #include <stdio.h>

int main ()
{
    printf("%d", ft_isprint('~'));
} */

// Fonksiyona girilen parametrenin ekrana
// yazılıp yazılmadığını döndürür.(0 veya 1 şeklinde)
