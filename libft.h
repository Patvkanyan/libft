/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:02:23 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/17 18:12:28 by alen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int		ft_isalpha(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_isascii(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
#endif
