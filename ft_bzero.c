/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 04:01:00 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:55:53 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* #include <stdio.h>
int main (void)
{
		char str[] = "mu2tlu";
	ft_bzero(str, 5);

	printf("%s",str );
} */

// Parametreden gelen "s" dizisine n kadar null değer atar.
