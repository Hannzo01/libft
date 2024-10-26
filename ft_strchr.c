/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:52:48 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/26 13:46:13 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	while (*s)
	{
		if (*s == c)
		{
			p = (char *)s;
			return (p);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main()
{
	const char s[] = "KENZA IS 8 THE BEST";
	int c = 56;
	char *s2 = ft_strchr(s,c);
	printf("%s", s2);
}
*/
