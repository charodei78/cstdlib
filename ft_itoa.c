
#include "libft.h"

char			*ft_itoa(int n)
{
	long		tmp;
	int			len;
	char		*res;

	if (!n)
		return (ft_strdup("0"));
	tmp = n;
	len = 0;
	while (n)
		n /= 10 + (len++) * 0;
	if (tmp < 0)
		tmp *= -1 + (len++) * 0;
	if (!(res = (char *)ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	res[0] = '-';
	res[len + 1] = '\0';
	while (tmp)
	{
		res[--len] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (res);
}
