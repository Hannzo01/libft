/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:17:43 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/24 14:37:09 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
		i++;
	}
}

int main()
{
	const char s1[] = "kenza";
	const char s2[] = "kenza";
	int result = ft_strncmp(s1, s2,5);
	printf("%d", result);
}