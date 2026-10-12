/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahlawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:18:17 by atahlawi          #+#    #+#             */
/*   Updated: 2026/10/10 08:48:49 by atahlawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
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
		len--;
		if (n < 0 && len == 0)
			str[0] = '-';
		else
		{
			str[len] = (x % 10) + '0';
			x /= 10;
		}
	}
	return (str);
}
