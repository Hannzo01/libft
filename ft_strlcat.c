/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannzo <hannzo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:28:29 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/25 11:31:43 by hannzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t j;
	size_t i;
	size_t lenofdest;
	size_t lenofsrc;

	j = 0;
	
	lenofdest = ft_strlen(dst);
	lenofsrc = ft_strlen(src);
	i = lenofdest;
	if (size > lenofdest)
	{
		while(src[j] && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (lenofdest + lenofsrc);
	}
	else 
		return (size + lenofsrc);
}