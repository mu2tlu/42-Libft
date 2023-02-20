/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:36:52 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:56:14 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	printf("%s", ft_calloc(a, b));
} */

// Her birinin boyutu byte olarak ifade edilen ve size parametre değeri kadar
// olan bellekten count parametre değeri kadar sayıda bellek bloğunu tahsis eder
// ve tahsis edilen belleğin tamamını sıfır değeri ile doldurur.
// Malloc fonksiyonu ile bellekte alan açıp
// ft_bzero fonksiyonu ile null atayarak döndürüyoruz.
