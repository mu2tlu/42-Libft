/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:41:04 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:41:34 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* #include <stdio.h>

int main()
{
    printf("%s",(char *)ft_lstnew("mu2")->content);
} */

// fonksiyona girilen parametre struct yapısının içeriğine eklenir.
// bir sonraki bağlı liste olmadığı için struct yapısının
// next pointerına NULL atanır.
// yeni oluşturulan struct return edilir.
