/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:39:00 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/31 13:21:21 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		leng;
	char		*sub;

	if (!s)
		return (NULL);
	i = 0;
	leng = ft_strlen(s) - start;
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

/*
int main()
{
	char *s = ft_substr(NULL, 3, 4);
	printf("%s\n", s);
}
*/
