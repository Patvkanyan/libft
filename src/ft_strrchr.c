/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:04:58 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/21 17:08:09 by apatvaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	char		*ret_s;

	ret_s = (char *)s;
	len = ft_strlen(s);
	while (len)
	{
		if (ret_s[len] == (unsigned char)c)
			return (&ret_s[len]);
		--len;
	}
	if (ret_s[len] == (unsigned char)c)
		return (&ret_s[len]);
	return (NULL);
}
