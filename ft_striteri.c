/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:51:37 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/04 12:00:34 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (f == NULL || s == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
