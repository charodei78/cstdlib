

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (dst[i] && j++ < size)
		i++;
	if (i >= size)
		return (size + ft_strlen(src));
	j = 0;
	while (j < (size - i - 1) && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (src[j])
		return (ft_strlen(src) + i);
	return (j + i);
}
