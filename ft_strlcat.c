/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:02:11 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/26 14:03:27 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	lenofdest;
	size_t	lenofsrc;

	j = 0;
	lenofdest = ft_strlen(dst);
	lenofsrc = ft_strlen(src);
	i = lenofdest;
	if (size > lenofdest)
	{
		while (src[j] && i < (size - 1))
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (lenofdest + lenofsrc);
	}
	else
		return (size + lenofsrc);
}
