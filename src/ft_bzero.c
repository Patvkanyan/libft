/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:18:48 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/20 23:47:24 by alen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
