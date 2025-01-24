/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatvaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:46:14 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/24 14:06:20 by apatvaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_len_int(int n)
{
	int	ret_len;

	ret_len = 1;
	if (n < 0)
		++ret_len;
	while (n /=  10)
		++ret_len;
	return (ret_len);
}

char *ft_itoa(int n)
{
	int		len_int;
	char	*ret_str;

	len_int = ft_len_int(n);
	ret_str = (char *)malloc(len_int);
	if (!ret_str)
		return (NULL);
	ret_str[len_int] = '\0';
	--len_int;
	if (n < 0)
		ret_str[0] = '-';
	while (len_int)
	{
		ret_str[len_int] = n % 10 + '0';
		n /= 10;
		--len_int;
	}
	return (ret_str);
}

int main()
{
	char *str;
	str = ft_itoa(123);
	printf("%s\n", str);
}
