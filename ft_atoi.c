/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:54:03 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:55:29 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
	{
		x = x * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == '-' || *str == '+')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		y = (y * 10);
		y = y + (*str - '0');
		str++;
	}
	return (x * y);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "-123abc";
	printf("%d", ft_atoi(str));
} */

// Parametreden gelen char dizisini int değere çevirir.
