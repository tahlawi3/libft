#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
