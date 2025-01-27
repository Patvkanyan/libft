
#include "libft.h"
#include <stdio.h>
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list  *ptr;

	if (!lst)
		return ;
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}
