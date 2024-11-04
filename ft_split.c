/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:46:18 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/04 11:55:19 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
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

static void	free_kolchi(char **p, int chmn_str)
{
	while (chmn_str > 0)
	{
		free (p[chmn_str]);
		chmn_str--;
	}
	p = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;
	int		counter;
	int		chmn_str;
	int		sep_pos;

	i = 0;
	sep_pos = 0;
	chmn_str = 0;
	counter = count_words (s, c);
	p = malloc((counter + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (chmn_str < counter)
	{
		while (s[sep_pos] == c)
			sep_pos++;
		while (s[sep_pos + i] != c && s[i + sep_pos] != '\0')
			i++;
		p[chmn_str] = ft_substr(s, sep_pos, i);
		if (p[chmn_str] == NULL)
		{
			free_kolchi(p, chmn_str);
			return (NULL);
		}
		sep_pos = sep_pos + i;
		chmn_str++;
	}
	p[counter] = '\0';
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

}
*/
