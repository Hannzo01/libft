/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:17:43 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/26 13:49:03 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*s1 == '\0' || *s2 == '\0' || *s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}

/*
int main()
{
	const char s1[] = "kbnza";
	const char s2[] = "kanza";
	int result = ft_strncmp(s1, s2,6);
	printf("%d", result);
}
*/
