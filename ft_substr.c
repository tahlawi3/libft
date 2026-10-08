#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ans;

	if (s == 0)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
		i++;
	ans = malloc(i + 1);
	if (ans == 0)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = 0;
	return (ans);
}
