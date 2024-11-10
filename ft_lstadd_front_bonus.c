/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannzo <hannzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:27:55 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/09 17:51:42 by hannzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || *lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main()
{
	t_list	*head;
	t_list **lst = &head;
	
	t_list *new = malloc(sizeof(t_list));
	if (new == NULL)
		return 1;
	new->next = NULL;
	
	head = malloc(sizeof(t_list));
	if (head == NULL)
		return 1;
	head->next = malloc(sizeof(t_list));
	head->next->next = malloc(sizeof(t_list));
	head->next->next->next = NULL;
	
	ft_lstadd_front(lst,new);
	t_list *current;
	current = *lst;
	while(current != NULL)
	{
		printf("%p\n", current);
		current = current->next;
	}
}
*/
