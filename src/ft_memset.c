/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:58:04 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/15 16:12:50 by alen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		++i;
	}
	return (b);
}

/*int main()
{
	char c = 'a';

	char str[] = "adfafd";

	size_t i = 6;
	char *strr;

	strr = (char *)ft_memset((void *)str, c, i);
	printf("%s\n", strr);
}*/
