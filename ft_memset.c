/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:03:30 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/10 15:40:21 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
int main()
{
	// int c = 0; 
	// char *p = (char*)&c;
	// ft_memset (p, 57, 1);  //least significant byte
	// ft_memset (p+1, 5, 1);
	// ft_memset (p+2, 0, 1);
	// ft_memset (p+3, 0, 1);


	// int c = 0;
	// ft_memset(&c, 7, 4);
	//printf("%d\n", c);

	// char c[] = "hello";
	// ft_memset(c,'k',1);
	// ft_memset(c+1,'e',1);
	// ft_memset(c+2,'n',1);
	// ft_memset(c+3,'z',1);
	// ft_memset(c+4,'a',1);
	// printf("%s", c);
}*/