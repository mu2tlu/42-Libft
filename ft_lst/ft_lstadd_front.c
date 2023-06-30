/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumutlu <mumutlu@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:37:14 by mumutlu           #+#    #+#             */
/*   Updated: 2023/02/20 13:37:16 by mumutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* #include <stdio.h>

int main(void)
{
	t_list *node1;
	t_list *node2;

	node1 = ft_lstnew("42");
	node2 = ft_lstnew(" Kocaeli");

	ft_lstadd_front(&node2, node1);

	printf("%s",(char *)node1->content);
	printf("%s",(char *)node1->next->content);
	return (0);
} */

// lst structının bağlı olduğu listelerin başına ekler
// lst structı ve new structı listenin başlangıcını işaret eder.
