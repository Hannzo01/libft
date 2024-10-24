/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:41:32 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/23 18:12:01 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*p;
	p = NULL;
	while(*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return (char *)s;
	return p;
}
/*
int main()
{
	const char s[] = "kenza,hh,labass";
	int c = 0;
	char *res = ft_strrchr(s,c);
	if (res != NULL)
		printf("'%s'\n", res);
}
*/
