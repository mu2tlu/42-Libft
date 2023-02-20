/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:28:44 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 14:25:29 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		start;
	char	*news1;

	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	news1 = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!news1)
		return (0);
	i = 0;
	while (start < end)
	{
		news1[i] = s1[start];
		i++;
		start++;
	}
	news1[i] = '\0';
	return (news1);
}

/* #include <stdio.h>

int main(void)
{
    char s1[] = "eeemuhammeeetmee";
    char s2[] = "eeem";
    char *res;

    res = ft_strtrim(s1, s2);
    printf("Original String: %s\nTrimmed String: %s\n", s1, res);
    free(res);
    return 0;
} */

// s1 dizisinin başında ve sonunda set karakterlerini arar bulduğu zaman kırpar.
