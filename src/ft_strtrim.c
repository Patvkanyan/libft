/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatvaka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:47:32 by apatvaka          #+#    #+#             */
/*   Updated: 2025/01/22 14:13:37 by apatvaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	while (s1[i] == s2[i])
		++i;
	while (s1[len_s1] == s2[len_s2])
	{
		--len_s1;
		--len_s2;
	}
	return (ft_substr(s1, i, len_s1 - i + 1));
}


int main()
{
   	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
 	char *ret = ft_strtrim(s1, " \n\t");

	printf("%s\n%s\n", ret,s2);
}
