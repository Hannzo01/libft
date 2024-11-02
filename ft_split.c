/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:46:18 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/31 18:11:03 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			counter++;
		}
	}
	return (counter);
}

int ln(char *s, char c)
{
	int	i;
	int len;
	
	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
				i++;
				len++;
		}
	}
	return (len);
}
char	*ft_allocation(int len, char *s)
{
	int	i;
	char *ptr;

	i = 0;
	ptr = malloc(len + 1);
	if (ptr = NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = *s[i];
		i++;
	}
	return p;
}
char	**ft_split(char const *s, char c)
{
	int		i;
	char 	**p;
	int		counter;
	int		cw;
	
	i = 0;
	cw = 0;
	p = malloc((counter + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (cw < counter)
	{
		p[cw] = malloc((ln(s, char c) + 1))
	}
	
}

int main()
{
	int res = count_words("  ", ' ');
	printf("%d", res);
}
