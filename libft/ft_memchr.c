#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *copy;

	copy = (unsigned char *)s;
	while (n > 1 && *copy != (unsigned char)c && *copy++)
		n--;
	if (*copy == (unsigned char)c)
		return ((void *)copy);
	else
		return (NULL);
}
