/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:30:25 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/06 18:23:18 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*p;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[len] = '\0';
	return (p);
}

/*
char	add(unsigned int i, char c)
{	
	i = i + 1;
	if ( i % 2 == 0)
		c += 1;
		return (c);
}
int main()
{
	char str[] = "abcd";
	char *res = ft_strmapi(str,add);
	printf("%s\n", res);
}
*/
