/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatvaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:53:16 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/27 19:39:48 by apatvaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = lst;
	if (!lst)
		return ;
	while (ptr->next)
	{
		del(ptr->content);
		ptr = ptr->next;
	}
	free(lst);
}
