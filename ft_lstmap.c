
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *new_lst;
	t_list	*ptr;

	if (!lst)
		return (NULL);	
	new_lst = (t_list *)malloc(sizeof(t_list));
	if (!new_lst)
		return (NULL);
	ptr = new_lst; 
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
			ft_lstclear(&new_lst, del);
		lst = lst->next;
		ptr = ptr->next;
	}
	return (new_lst);
}