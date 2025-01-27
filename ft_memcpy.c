/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:38:54 by alen              #+#    #+#             */
/*   Updated: 2025/01/26 18:40:34 by alen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ft;
	const unsigned char	*src_ft;

	i = 0;
	dest_ft = (unsigned char *)dest;
	src_ft = (const unsigned char *)src;
	if (dest_ft == NULL && src_ft == NULL)
		return (NULL);
	while (i < n)
	{
		dest_ft[i] = src_ft[i];
		++i;
	}
	return (dest_ft);
}
