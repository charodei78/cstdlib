
#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		little_len;
	size_t		big_len;

	if (*little == '\0' || big == little)
		return ((char *)big);
	if (!len)
		return (NULL);
	little_len = ft_strlen(little);
	big_len = ft_strlen(big) + 1;
	len = len > big_len ? big_len : len;
	while (len && len >= little_len)
	{
		if (*big == *little)
		{
			if (!ft_strncmp(big, little, little_len))
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
