#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;
	t_list *delete;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		delete = current;
		current = current->next;
		del(delete->content);
		free(delete);
	}
	*lst = NULL;
}
