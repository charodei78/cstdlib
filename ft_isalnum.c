
int			ft_isalnum(int c)
{
	c = (char)c;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (8);
	return (0);
}
