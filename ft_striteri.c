/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:51:37 by kemzouri          #+#    #+#             */
/*   Updated: 2024/11/02 18:04:57 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (f == NULL || s == NULL)
		return;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
int main()
{
	char *s= NULL;
	ft_striteri(s, add);
	printf("%s\n", s);
	it seg fault so we have to handle it
}
void	add(unsigned int i, char *c)
{
	if ( i % 2 == 0)
		*c += 1;
	if (f == NULL || s == NULL)
		return; we returned " return; " insted of return NULL bcz the function return is void 
}
return; in a function with a void return type means that the function will exit
 at that point and not return any value.
*/
