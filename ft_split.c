#include "libft.h"

int	count_word(char const *s, char c)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			cnt++;
		i++;
	}
	return (cnt);
}

size_t	get_i(char const *s, char c, size_t i)
{
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	free_split(char **str, size_t j)
{
	while (j > 0)
	{
		j--;
		free(str[j]);
	}
	free(str);
}

char	**f_split(char **str, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			r = i;
			i = get_i(s, c, i);
			str[j] = ft_substr(s, r, i - r);
			if (str[j] == 0)
			{
				free_split(str, j);
				return (0);
			}
			j++;
		}
		else
			i++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (str == 0)
		return (0);
	str = f_split(str, s, c);
	return (str);
}
