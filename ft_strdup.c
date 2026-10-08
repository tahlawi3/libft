#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = 0;
	while (s[i])
		i++;
	dup = malloc(i + 1);
	if (dup == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
