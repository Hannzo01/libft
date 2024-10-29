/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemzouri <kemzouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:43:34 by kemzouri          #+#    #+#             */
/*   Updated: 2024/10/29 10:24:13 by kemzouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(long nbr)
{
	int	counter;

	counter = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		counter++;
	}
	while (nbr)
	{
		nbr = nbr / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		counter;
	long	nbr;
	char	*p;
	int		i;

	nbr = n;
	counter = ft_count(nbr);
	p = malloc(sizeof(char) * counter + 1);
	if (p == NULL)
		return (NULL);
	if (nbr == 0)
		return ("0");
	if (nbr < 0)
	{
		nbr *= -1;
		p[0] = '-';
	}
	i = counter - 1;
	while (nbr)
	{
		p[i--] = nbr % 10 + 48;
		nbr /= 10;
	}
	p[counter] = '\0';
	return (p);
}

/*
#include <limits.h>
int main()
{
	//int counter = ft_count(9);
	//printf("%d\n", counter);
	char *str = ft_itoa(0);
	printf("%s\n", str);
}
*/
