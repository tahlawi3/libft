#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (dest[i] && i < size)
		i++;
	if (i == size)
		return (i + j);
	dest_len = i;
	src_len = j;
	j = 0;
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest_len + src_len);
}
