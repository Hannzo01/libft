/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:28:08 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/29 10:26:02 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (check(s1[start], set) == 1)
		start++;
	while (check(s1[end], set) == 1)
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
/*
int main()
{
	char *res = ft_strtrim( "       k en zasa  l a ma z n  e k       ", " ");
	printf("%s", res);
}
*/
