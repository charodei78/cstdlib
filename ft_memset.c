
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*tmp;

	if (!n)
		return (s);
	tmp = s;
	while (n--)
		*(unsigned char *)(s++) = c;
	return (tmp);
}
