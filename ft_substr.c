/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:39:00 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/27 16:41:57 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		leng;
	char		*sub;

	i = 1;
	leng = strlen(s) - start;
	if (leng > len)
		leng = len;
	sub = malloc(sizeof(char) * leng + 1);
	if (sub == NULL)
		return (NULL);
	while (s[start] && i < leng)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

int main()
{
	printf("%s\n", ft_substr("ABCDEF", 2, 3));
}

