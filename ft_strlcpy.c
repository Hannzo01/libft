/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:11:25 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/24 22:48:19 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t len;

	i = 0;
	len = ft_strlen(src);	
	while(src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
int main() {
    char src[] = "Hello, world!";
    char dst[20];
    size_t copied_len;

    copied_len = strlcpy(dst, src, sizeof(dst));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    printf("Length of source: %zu\n", copied_len);

    return 0;
}
