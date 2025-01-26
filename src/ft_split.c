/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alen <alen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:01:17 by alen              #+#    #+#             */
/*   Updated: 2025/01/26 16:20:10 by alen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static	int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		in_word = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			if (!in_word)
			{
				in_word = 1;
				++count;
			}
			++s;
		}
	}
	return (count);
}

static	int	malloc_words(char **ret_str, int index, size_t len)
{
	int	i;

	i = 0;
	ret_str[index] = (char *)malloc(len);
	if (!ret_str[index])
	{
		while (i < index)
		{
			free(ret_str[i]);
			++i;
		}
		free(ret_str);
		return (1);
	}
	return (0);
}

static	int	len_word(char **ret_str, const char *s, char separator)
{
	size_t	len_word;
	int		index;

	index = 0;
	len_word = 0;
	while (*s)
	{
		len_word = 0;
		while (*s == separator && *s)
			++s;
		while (*s != separator && *s)
		{
			++len_word;
			++s;
		}
		if (len_word)
		{
			if (malloc_words(ret_str, index, len_word + 1))
				return (1);
			ft_strlcpy(ret_str[index], s - len_word, len_word + 1);
			++index;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ret_str;
	int		count;

	if (!s)
		return (NULL);
	if (c == '\0')
	{
		ret_str = (char **)malloc(2 * sizeof(char *));
		if (!ret_str)
			return (NULL);
		ret_str[0] = ft_strdup((char *)s);
		ret_str[1] = NULL;
		return (ret_str);
	}
	count = count_words(s, c);
	ret_str = (char **)malloc((count + 1) * sizeof(char *));
	if (!ret_str)
		return (NULL);
	ret_str[count] = NULL;
	if (len_word(ret_str, s, c))
		return (NULL);
	return (ret_str);
}
