
#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	count;

	count = 0;
	if (!s)
		return (0);
	if (!(res = (char *)malloc((len + 1) * (sizeof(char)))))
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
	{
		*res = '\0';
		return (res);
	}
	s += start;
	while (*s && len--)
	{
		*(res++) = *(s++);
		count++;
	}
	*res = '\0';
	return (res - count);
}
