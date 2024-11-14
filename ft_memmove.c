/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:16:14 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/14 17:23:51 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dest;
	if (d > s)
	{
		while (n != 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main()
{
	char str[] = "1337 shcool";
	ft_memmove(str+1, str, 4);
	ft_memmove(str+2, str, 6);
	printf("%s\n",(char *)memmove(str+2, str, 5));
	printf("%s",str);
}
*/
