/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:58:00 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/10 15:45:50 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int main()
{
	int str[] = {12,89,78,22};
	ft_bzero(str,sizeof(str));
	for (int i = 0; i < 4 ; i++)
	{
		printf("%d", str[i]);
		printf("\n");
	}
	
}*/
