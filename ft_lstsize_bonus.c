/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannzo <hannzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:36:33 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/11 22:20:28 by hannzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	if (lst == NULL)
		return (0);
	count = 0;
	lst = lst;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
//delete for header
/*
int main()
{
	t_list *head = malloc(sizeof(t_list));
	if (head == NULL)
		return 1;
	head->next = malloc(sizeof(t_list));
	head->next->next = malloc(sizeof(t_list));
	head->next->next->next = malloc(sizeof(t_list));
	head->next->next->next->next = NULL;
	int count = ft_lstsize(head);
	printf("%d", counter);
}













*/