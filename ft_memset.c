/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannzo <hannzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:18:02 by hannzo            #+#    #+#             */
/*   Updated: 2024/10/13 21:29:59 by hannzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	*p = s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
/*
int main()
{
    int arr = 257;
    ft_memset(&arr,0,1);
    printf("%d\n", arr);
}
*/
