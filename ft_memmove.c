/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatvaka <apatvaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:37:35 by alen              #+#    #+#             */
/*   Updated: 2025/01/30 17:06:08 by apatvaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ft;
	const unsigned char	*src_ft;

	dest_ft = (unsigned char *)dest;
	src_ft = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest_ft < src_ft)
	{
		i = -1;
		while (++i < n)
			dest_ft[i] = src_ft[i];
	}
	else
	{
		while (n--)
			dest_ft[n] = src_ft[n];
	}
	return (dest);
}
