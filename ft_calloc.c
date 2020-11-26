
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (!(res = (void *)malloc(size * nmemb)))
		return (NULL);
	ft_bzero(res, size * nmemb);
	return (res);
}
