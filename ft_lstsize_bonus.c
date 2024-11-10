
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	if (lst == NULL)
		return (0);
	count = 0;
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
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