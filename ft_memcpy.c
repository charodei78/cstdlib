
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (dest);
	while (n--)
		*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}
