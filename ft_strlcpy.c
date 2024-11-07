/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:11:25 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/06 18:48:28 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen (src);
	if (size == 0 || dst == NULL)
		return (len_src);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
/*
int main() {
    char src[] = "Hello, world!";
    char dst[0];
    size_t copied_len;

    copied_len = strlcpy(dst, src, 3);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    printf("Length of source: %zu\n", copied_len);

    return 0;
}*/
// int main() {
//     const char *src = "Hello, world!";
//     char dst[10];  // Allocate a small destination buffer
//     size_t dstsize;
//     size_t copied_len;

//     // Test case 1: dstsize == 0
//     dstsize = 0;
//     copied_len = ft_strlcpy(dst, src, dstsize);
//     printf("Test 1 - dstsize = 0:\n");
//     printf("Source: %s\n", src);
//     printf("Destination: '%s' (should be empty)\n", dst);
// Nothing copied to dst
//     printf("Length of source: %zu\n\n", copied_len);
// }
