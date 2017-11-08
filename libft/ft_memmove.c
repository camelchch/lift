#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void	*dest, const void *src, size_t n)
{
	unsigned	char	*result;
	const	unsigned	char	*ori;

	result = dest;
	ori = src;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else
		while (n >= 1)
		{
			*(result + n - 1) = *(ori + n -1);
			n--;
		}
	return (result);
}
