#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = 0;
	while (*s)
	{
		if (*s == (char)c)
			l = (char *)s;
		s++;
	}
	if ((char)c == 0)
		l = (char *)s;
	return (l);
}
