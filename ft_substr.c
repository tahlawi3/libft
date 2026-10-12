/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahlawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:26:15 by atahlawi          #+#    #+#             */
/*   Updated: 2026/10/05 07:39:41 by atahlawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*ans;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	ans = malloc(len + 1);
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
