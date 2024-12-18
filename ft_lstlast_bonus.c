/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:36:26 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/10 09:36:28 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

/*
int main()
{
	t_list *head = malloc(sizeof(t_list));
	head->next = malloc(sizeof(t_list));
	head->next->next = malloc(sizeof(t_list));
	head->next->next->next = malloc(sizeof(t_list));
	head->next->next->next->next = NULL;
	t_list *node = ft_lstlast(head);
	printf("%p\n", node);
	printf("%p\n",head->next->next->next);
	printf("%p\n", head);
	printf("%p\n",head->next->next);
	printf("%p\n",head->next->next->next->next );
}
*/