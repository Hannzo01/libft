/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:16:14 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/26 17:08:31 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char p[n];
	char *d;
	char *s = (char *) src;
	d = (char *)dest;

	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = p[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char str[] = "123456789";
	//memmove(str+1, str, 4);
	//ft_memmove(str+2, str, 6);
	printf("%s\n",(char *)memmove(str+1, str, 3) );
	//printf("%s",str);
}
*/
