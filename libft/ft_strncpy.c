#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n && *src)
		dest[i++] = *src++;
	if(i < n)
	{
		while(i < n)
			dest[i++] = '\0';
	}
	return (dest);
}