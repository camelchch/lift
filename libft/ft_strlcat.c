#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(dest);
	i = 1;
	if (!n)
		return (ft_strlen(dest) + ft_strlen(src));
	while (*src && i <= n -length - 1)
		dest[length - 1 + i++] = *src++;
	dest[length - 1 + i] = '\0';
	return (length -1 + i);
}
