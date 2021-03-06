
#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n--)
	{
		if (*s1 == *s2)
			s2++;
		else
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
	}
	if (!(n + 1))
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
