/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:46:18 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/11 16:29:22 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	if (s == NULL)
		return (0);
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

static void	free_words(char **p, int num)
{
	if (p == NULL || *p == NULL)
		return ;
	while (num > 0)
	{
		num--;
		free(p[num]);
	}
	free(p);
}

static char	*extract_word(char const *s, char c, int *sep_pos)
{
	int		start;
	int		len;
	char	*word;

	while (s[*sep_pos] == c)
		(*sep_pos)++;
	start = *sep_pos;
	len = 0;
	while (s[*sep_pos] != c && s[*sep_pos] != '\0')
	{
		(*sep_pos)++;
		len++;
	}
	word = ft_substr(s, start, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;
	int		counter;
	int		sep_pos;

	sep_pos = 0;
	counter = count_words (s, c);
	if (!s)
		return (NULL);
	p = malloc((counter + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < counter)
	{
		p[i] = extract_word(s, c, &sep_pos);
		if (p[i] == NULL)
		{
			free_words(p, i);
			return (NULL);
		}
		i++;
	}
	p[i] = NULL;
	return (p);
}
