
#include "libft.h"

char			*ft_strdup(const char *s)
{
	char	*res;
	size_t	len;

	len = ft_strlen(s);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*s)
		*(res++) = *(s++);
	*res = *s;
	return (res - len);
}
