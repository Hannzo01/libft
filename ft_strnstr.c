/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:13:48 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/04 18:54:30 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_of_big;
	size_t	len_of_little;

	i = 0;
	len_of_big = ft_strlen(big);
	len_of_little = ft_strlen(little);
	if (len_of_little > len_of_big)
		return (NULL);
	else if (len_of_little == 0)
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == *little && ft_strncmp(&big[i], little, len_of_little) == 0
			&& (len - i) >= len_of_little)
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char *big = "keniza";
	const char *little = "ni";  
	char *str = strnstr(big, little, 6);
	printf("%s\n", str);
}
*/
