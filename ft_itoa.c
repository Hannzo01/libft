/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:43:34 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/28 13:24:29 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count(long nbr)
{
	int	counter;
	
	counter = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 10)
		return (1);
	else
		while (nbr)
		{
			nbr = nbr / 10;
			counter++;
		}
	return counter;
}


char	*ft_itoa(int n)
{
	int	counter;
	long	nbr;
	int	i;
	char	*p;

	nbr = n;
	counter = ft_count(nbr);
	p = malloc(sizeof(char) * counter);
	if (p == NULL)
		return (NULL);
	
	
}

int main()
{
	int counter = ft_count(9);
	printf("%d\n", counter);
	
}