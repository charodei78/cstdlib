
#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	count;

	res = 0;
	if (s && f)
	{
		if (!(res = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char))))
			return (NULL);
		count = 0;
		while (s[count])
		{
			res[count] = f(count, s[count]);
			count++;
		}
		res[count] = '\0';
	}
	return (res);
}
