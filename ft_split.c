/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:46:18 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/06 18:14:25 by kemzouri         ###   ########.fr       */
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

static void	free_kolchi(char ***p, int chmn_str)
{
	if (p == NULL || *p == NULL)
        return ;
	while (chmn_str > 0)
	{
		chmn_str--;
		free((*p)[chmn_str]);
	}
	free(*p);
	*p = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;
	int		chmn_str;
	int		sep_pos;

	sep_pos = 0;
	chmn_str = 0;
	p = malloc((count_words (s, c) + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (chmn_str < count_words (s, c))
	{
		while (s[sep_pos] == c)
			sep_pos++;
		i = 0;
		while (s[sep_pos + i] != c && s[i + sep_pos] != '\0')
			i++;
		p[chmn_str] = ft_substr(s, sep_pos, i);
		if (p[chmn_str] == NULL)
			return (free_kolchi(&p, chmn_str), NULL);
		sep_pos = sep_pos + i;
		chmn_str++;
	}
	p[chmn_str] = NULL;
	return (p);
}
/*
int main()
{
	const char *s = "  kenza salam  labass  kolchi bikhirr hh  ";
	char **p = ft_split(s, ' ');
	for (int i = 0; i < count_words(s, ' ') ; i++)
	{
		printf("%s\n", p[i]);
		
	}

}*/