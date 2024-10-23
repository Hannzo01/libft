

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 122)
		return (1);
	return (0);
}
