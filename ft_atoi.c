/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahlawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:14:26 by atahlawi          #+#    #+#             */
/*   Updated: 2026/09/28 09:14:28 by atahlawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	num;

	i = 0;
	s = 1;
	num = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			s = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * s);
}
