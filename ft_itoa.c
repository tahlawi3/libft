#include "libft.h"

int	num_len(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	x;
	int		len;
	char	*str;

	x = n;
	len = num_len(x);
	str = malloc(len + 1);
	if (str == 0)
		return (0);
	str[len] = 0;
	if (x < 0)
		x *= -1;
	while (len > 0)
	{
		if (n < 0 && len == 1)
			str[0] = '-';
		else
		{
			len--;
			str[len] = (x % 10) + '0';
			x /= 10;
		}
	}
	return (str);
}
