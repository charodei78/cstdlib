
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	if (!dst && !src)
		return (0);
	count = ft_strlen(src);
	if (!size)
		return (count);
	while (--size && *src)
		*(dst++) = *(src++);
	*dst = '\0';
	return (count);
}
