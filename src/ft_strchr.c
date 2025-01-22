/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:12:03 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/21 15:52:08 by apatvaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ret_s;
	size_t	i;

	i = 0;
	ret_s = (char *)s;
	while (ret_s[i])
	{
		if (ret_s[i] == (char)c)
		{
			return (&ret_s[i]);
		}
		++i;
	}
	if (ret_s[i] == (char)c)
		return (&ret_s[i]);
	return (NULL);
}
